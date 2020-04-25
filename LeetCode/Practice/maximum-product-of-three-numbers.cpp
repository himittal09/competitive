class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n1 {-10000}, n2 {-10000}, n3 {-10000};
        int nn1 {10000}, nn2 {10000};
        for (int val: nums)
        {
            if (val > n1)
            {
                n3 = n2;
                n2 = n1;
                n1 = val;
            }
            if (val < nn2)
            {
                nn2 = nn1;
                nn1 = val;
            }
        }
        nn1 *= (nn2 * n1);
        n1 *= (n2 * n3);
        return max(nn1, n1);
    }
};