#include <vector>

using namespace std;

class Solution {
    inline int max (const int a, const int b) const noexcept
    {
        return a >= b ? a : b;
    }
    inline int min (const int a, const int b) const noexcept
    {
        return a <= b ? a : b;
    }
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> col(grid[0].size(), 0);
        vector<int> row(grid.size(), 0);
        int increase {0}, maxVal{101};
        for (int i=0; i<grid.size(); i++)
        {
            maxVal = 0;
            for (int j=0; j<grid[i].size(); j++)
            {
                maxVal = max(maxVal, grid[i][j]);
            }
            row[i] = maxVal;
        }
        for (int i=0; i<grid[0].size(); i++)
        {
            maxVal = 0;
            for (int j=0; j<grid.size(); j++)
            {
                maxVal = max(maxVal, grid[j][i]);
            }
            col[i] = maxVal;
        }
        for (int i=0; i<grid.size(); i++)
        {
            for (int j=0; j<grid[i].size(); j++)
            {
                increase += (min(row[i], col[j]) - grid[i][j]);
            }
        }
        return increase;
    }
};