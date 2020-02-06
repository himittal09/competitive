class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int ei = 0;
        for (int i=0; i<A.size(); i++)
        {
            if (A[i] & 1 == 0)
            {
                swap(A[i], A[ei]);
                ei++;
            }
        }
        // partition(A.begin(), A.end(), [](int x)
        // {
        //     return !(x & 1);
        // });    
        return A;
    }
};