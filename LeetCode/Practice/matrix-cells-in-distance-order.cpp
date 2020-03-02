#include <vector>

using namespace std;

class Solution {
    inline int distance (int r1, int c1, int r2, int c2) const noexcept
    {
        return (abs(r1-r2) + abs(c1-c2));
    }
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>> sol(R, vector<int>(C, 0));
        for (int i=0; i<R; i++)
        {
            for (int j=0; j<C; j++)
            {
                sol[i][j] = distance(i, j, r0, c0);
            }
        }
        return sol;
    }
};