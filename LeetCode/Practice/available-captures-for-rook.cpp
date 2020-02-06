#include <vector>
#include <iostream>
using namespace std;

class Solution {
    int capture (vector<vector<char> >& board, int x, int y, const int xi, const int yi)
    {
        for (; x >= 0 && x<8 && y>=0 && y<8 && board[x][y] != 'B'; x += xi, y += yi)
            if (board[x][y] == 'p')
                return 1;
        return 0;
    }

public:
    int numRookCaptures(vector<vector<char> >& board) {
        int rookX, rookY, captureablePawns=0;
        for (rookX=0; rookX<8; rookX++)
        {
            for (rookY=0; rookY<8; rookY++)
            {
                if (board[rookX][rookY] == 'R')
                {
                    return capture(board, rookX, rookY, 0, 1) + capture(board, rookX, rookY, 0, -1) + capture(board, rookX, rookY, 1, 0) + capture(board, rookX, rookY, -1, 0);
                }
            }
        }
        return 0;
    }
};

int main ()
{
    Solution obj;
    vector<vector<char> > tc   {{{'.','.','.','.','.','.','.','.'},
                                {'.','.','.','p','.','.','.','.'},
                                {'.','.','.','R','.','.','.','p'},
                                {'.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.'},
                                {'.','.','.','p','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.'},
                                {'.','.','.','.','.','.','.','.'}}};
    cout << obj.numRookCaptures(tc);
}