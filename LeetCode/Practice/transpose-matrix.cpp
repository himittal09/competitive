#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > transpose(vector<vector<int> >& A) {
        int m=A.size(), n=A[0].size();
        vector<vector<int> > result(n, vector<int>(m, 0));
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                result[i][j] = A[j][i];
            }
        }
        return result;
    }
};

int main ()
{
    Solution obj;
    return 0;
}