class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int maxElem {0};
        for (int i=0; i<A.size(); i++)
        {
            if (A[i] > A[maxElem])
            {
                maxElem = i;
            }
        }
        return maxElem;
    }
};