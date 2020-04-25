#include <vector>

using namespace std;

class Solution {
    void explore_island (int x, int y, vector<vector<char>>& grid)
    {
        int m = grid.size(), n = grid[0].size();
        if (x < 0 || y < 0 || x >= m || y >= n || grid[x][y] == '0')
        {
            return;
        }
        grid[x][y] = '0';
        explore_island(x+1, y, grid);
        explore_island(x-1, y, grid);
        explore_island(x, y-1, grid);
        explore_island(x, y+1, grid);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        const int m = grid.size();
        if (!m)
        {
            return 0;
        }
        const int n = grid[0].size();
        int islandCount {0};
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (grid[i][j] == '1')
                {
                    explore_island(i, j, grid);
                    islandCount++;
                }
            }
        }
        return islandCount;
    }
};


auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();