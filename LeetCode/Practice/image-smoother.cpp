#include <vector>

using namespace std;

class Solution {
    int getNeighboursAverage (vector<vector<int>>& M, const int x, const int y)
    {
        int avgFactor=0;
        int avgCount=0;
        const vector<vector<int> > displacementVector {{
            {0, 0},
            {1, 0},
            {-1, 0},
            {0, 1},
            {0, -1},
            {1,-1},
            {-1, 1},
            {1, 1},
            {-1, -1}
        }};
        for (auto& myPair: displacementVector)
        {
            if ((x+myPair[0]) < 0 || (x+myPair[0]) >= M.size() || (y+myPair[1]) < 0 || (y+myPair[1]) >= M[0].size())
            {
                continue;
            }
            avgFactor += (M[x+myPair[0]][y+myPair[1]] & 255);
            avgCount++;
        }
        return avgFactor / avgCount;
    }
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int avgFactor=0;
        for (int i=0; i<M.size(); i++)
        {
            for (int j=0; j<M[0].size(); i++)
            {
                avgFactor = getNeighboursAverage(M, i, j);
                avgFactor <<= 8;
                M[i][j] |= avgFactor;
            }
        }
        for (int i=0; i<M.size(); i++)
        {
            for (int j=0; j<M[0].size(); i++)
            {
                M[i][j] >>= 8;
            }
        }
        return M;
    }
};