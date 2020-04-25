#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        const int n = A.size();
        int minElem;
        for (int i=n-2; i>=0; i--)
        {
            for (int j=0; j<n; j++)
            {
                minElem = A[i+1][j];
                if (j-1 >= 0)
                {
                    minElem = min(minElem, A[i+1][j-1]);
                }
                if (j+1 != n)
                {
                    minElem = min(minElem, A[i+1][j+1]);
                }
                A[i][j] += minElem;
            }
        }
        minElem = A[0][0];
        for (int i=0; i<n; i++)
        {
            minElem = min(minElem, A[0][i]);
        }
        return minElem;
    }
};