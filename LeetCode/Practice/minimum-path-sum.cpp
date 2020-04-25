#include  <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        const int m = grid.size();
        if (!m)
        {
            return 0;
        }
        const int n = grid[0].size();
        int min {INT_MAX};
        for (int i=m-1; i>=0; i--)
        {
            for (int j=n-1; j>=0; j--)
            {
                // for grid[i][j]
                // add minimum of grid[i+1][j], grid[i][j+1]
                if (i == m-1)
                {
                    if (j == n-1)
                    {
                        continue;
                    }
                    grid[i][j] += grid[i][j+1];
                }
                else if (j == n-1)
                {
                    grid[i][j] += grid[i+1][j];
                }
                else
                {
                    grid[i][j] += std::min(grid[i+1][j], grid[i][j+1]);
                }
            }
        }
        return grid[0][0];
    }
};