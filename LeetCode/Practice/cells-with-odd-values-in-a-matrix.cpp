class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        // don't need difference matrix, just count that for each element, how many times its row and column is being incremented
        int row[n] = {0};
        int col[m] = {0};
        for (auto q: indices)
        {
            row[q[0]]++;
            col[q[1]]++;
        }
        int oddCount = 0;
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                oddCount += (row[i] + col[j]) & 1;
            }
        }
        return oddCount;
    }
};