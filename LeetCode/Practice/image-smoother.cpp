#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        const vector<vector<int>> displacementVector(9, vector<int>(2)) = {
            {0, 0},
            {1, 0},
            {-1, 0},
            {0, 1},
            {0, -1},
            {1,-1},
            {-1, 1},
            {1, 1},
            {-1, -1}
        };
        int avgFactor=0;
        int avgCount=0;
        for (int i=0; i<M.size(); i++)
        {
            for (int j=0; j<M[i].size(); j++)
            {
                avgFactor = 0;
                avgCount = 0;
                for (auto& myPair: displacementVector)
                {
                    if ((i+myPair[0]) < 0 || (i+myPair[0]) >= M.size() || (j+myPair[1]) < 0 || (j+myPair[1]) >= M[0].size())
                    {
                        continue;
                    }
                    avgFactor += (M[i+myPair[0]][j+myPair[1]] & 255);
                    avgCount++;
                }
                M[i][j] |= ((avgFactor / avgCount) << 8);
            }
        }
        for (int i=0; i<M.size(); i++)
        {
            for (int j=0; j<M[i].size(); j++)
            {
                M[i][j] >>= 8;
            }
        }
        return M;
    }
};