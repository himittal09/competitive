#include <vector>

using namespace std;

class Solution {
    int nearOnes (vector<vector<int>>& grid, int x, int y) const noexcept
    {
        int nearOnes = 0;
        if (x > 0 && grid[x-1][y] == 1)
        {
            nearOnes++;
        }
        if (y > 0 && grid[x][y-1] == 1)
        {
            nearOnes++;
        }
        if (x < grid.size()-1 && grid[x+1][y] == 1)
        {
            nearOnes++;
        }
        if (y < grid[0].size()-1 && grid[x][y+1] == 1)
        {
            nearOnes++;
        }
        return nearOnes;
    }

public:
    int islandPerimeter(vector<vector<int>>& grid)
    {
        int periMeter = 0;
        for (int i=0; i<grid.size(); i++)
        {
            for (int j=0; j<grid[i].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    periMeter += (4 - nearOnes(grid, i, j));
                }
            }
        }
        return periMeter;
    }
};