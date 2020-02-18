class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n1=-1000, n2=-1000, n3=-1000;
        for (auto& val: nums)
        {
            if (val*n1*n2 > n1*n2*n3)
            {
                n3 = n2;
                n2 = n1;
                n1 = val;
            }
        }
        return n1*n2*n3;
    }
};