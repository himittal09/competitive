#include <iostream>
#include <queue>
#include <vector>
#include <limits>

using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        
        const int rows {static_cast<int>(matrix.size())}, cols {static_cast<int>(matrix[0].size())};
        vector<vector<int>> sol(rows, vector<int>(cols, 100000000));
        queue<pair<int, int>> myQ;
        pair<int, int> temp {make_pair(0, 0)};
        int r {0}, c {0};
        const int shift[4][2] {
            {1, 0},
            {-1, 0},
            {0, 1},
            {0, -1}
        };

        for (int i=0; i<rows; i++)
        {
            for (int j=0;j<cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    sol[i][j] = 0;
                    myQ.push(make_pair(i, j));
                }
            }
        }

        while (!myQ.empty())
        {
            temp = myQ.front();
            myQ.pop();
            for (int i=0; i<4; i++)
            {
                r = shift[i][0] + temp.first;
                c = shift[i][1] + temp.second;
                if (r < 0 || c < 0 || r >= rows || c >= cols)
                {
                    continue;
                }
                if (sol[r][c] > sol[temp.first][temp.second] + 1)
                {
                    sol[r][c] = sol[temp.first][temp.second] + 1;
                    myQ.push(make_pair(r, c));
                }
            }
        }

        return sol;
    }

    vector<vector<int>> updateMatrixDP(vector<vector<int>>& matrix) {
            
        const int rows {static_cast<int>(matrix.size())}, cols {static_cast<int>(matrix[0].size())};
        vector<vector<int>> sol(rows, vector<int>(cols, 100000000));

        for (int i=0; i<rows; i++)
        {
            for (int j=0;j<cols; j++)
            {
                if (matrix[i][j] == 0)
                {
                    sol[i][j] = 0;
                }
                else
                {
                    if (i > 0)
                    {
                        sol[i][j] = min(sol[i][j], sol[i-1][j] + 1);
                    }
                    if (j > 0)
                    {
                        sol[i][j] = min(sol[i][j], sol[i][j-1] + 1);
                    }
                }
            }
        }

        for (int i=rows-1; i >= 0; i--)
        {
            for (int j=cols-1; j >= 0; j--)
            {
                if (i < rows-1)
                {
                    sol[i][j] = min(sol[i][j], sol[i+1][j] + 1);
                }
                if (j < cols-1)
                {
                    sol[i][j] = min(sol[i][j], sol[i][j+1] + 1);
                }
            }
        }

        return sol;
    }
};