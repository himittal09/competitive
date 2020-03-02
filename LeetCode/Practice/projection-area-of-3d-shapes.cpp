class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int counter {0}, maxE {51};
        for (auto& row: grid)
        {
            counter += *max_element(row.begin(), row.end());
        }
        for (int j=0; j<grid[0].size(); j++)
        {
            maxE = 0;
            for (int i=0; i<grid.size(); i++)
            {
                maxE = max(maxE, grid[i][j]);
                if (grid[i][j])
                {
                    counter++;
                }
            }
            counter += maxE;
        }
        return counter;
    }
};