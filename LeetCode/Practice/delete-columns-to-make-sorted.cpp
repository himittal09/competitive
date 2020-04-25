#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        const int n = A.size();
        const int l = A[0].length();
        int D {0};
        for (int j=0; j<l; j++)
        {
            for (int i=0; i<n-1; i++)
            {
                if (A[i][j] > A[i+1][j])
                {
                    D++;
                    break;
                }
            }
        }
        return D;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();