#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int counter {0}, tx {0}, ty {0};
        for (int i=0; i<board.size(); i++)
        {
            for (int j=0; j<board[i].size(); j++)
            {
                if ((board[i][j] == '.') or (i > 0 and board[i-1][j] =='X') or (j > 0 and board[i][j-1] == 'X'))
                {
                    continue;
                }
                counter++;
            }
        }
        return counter;
    }
};