#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int nonZeroElem {0};
        int surfaceArea {0};
        const int size = grid.size();

        for (int i=1; i<size; i++)
        {
            for (int j=1; j<size; j++)
            {
                if (grid[i][j])
                {
                    nonZeroElem++;
                }
                surfaceArea += abs(grid[i][j] - grid[i][j-1]);
                surfaceArea += abs(grid[i][j] - grid[i-1][j]);
            }
            surfaceArea += abs(grid[0][i] - grid[0][i-1]);
            surfaceArea += abs(grid[i][0] - grid[i-1][0]);
        }

        for (int i=0; i<size; i++)
        {
            if (grid[i][0])
            {
                nonZeroElem++;
            }
            if (grid[0][i])
            {
                nonZeroElem++;
            }
            surfaceArea += grid[0][i];
            surfaceArea += grid[i][0];
            surfaceArea += grid[i][size-1];
            surfaceArea += grid[size-1][i];
        }

        // to not include it twice
        if (grid[0][0])
        {
            nonZeroElem--;
        }

        surfaceArea += (2 * nonZeroElem);

        return surfaceArea;
    }
};


auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();