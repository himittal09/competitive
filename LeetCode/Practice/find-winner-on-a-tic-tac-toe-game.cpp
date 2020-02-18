#include <vector>

using namespace std;

class Solution {
    bool isWinning (vector<vector<char> >& gameBoard) const noexcept
    {
        for (int i=0; i<3; i++)
        {
            if (gameBoard[i][0] != ' ' && gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][0] == gameBoard[i][2])
            {
                return true;
            }
            if (gameBoard[0][i] != ' ' && gameBoard[0][i] == gameBoard[1][i] && gameBoard[0][i] == gameBoard[2][i])
            {
                return true;
            }
        }
        if (gameBoard[0][0] != ' ' && gameBoard[0][0] == gameBoard[1][1] && gameBoard[0][0] == gameBoard[2][2])
        {
            return true;
        }
        if (gameBoard[0][2] != ' ' && gameBoard[0][2] == gameBoard[1][1] && gameBoard[0][2] == gameBoard[2][0])
        {
            return true;
        }
        return false;
    }
public:
    string tictactoe(vector<vector<int>>& moves) {
        bool AMove = true;
        vector<vector<char> > gameBoard(3, vector<char>(3, ' '));
        for (auto& move: moves)
        {
            gameBoard[move[0]][move[1]] = (AMove ? 'X' : 'O');
            if (isWinning(gameBoard))
            {
                if (AMove)
                {
                    return "A";
                }
                else
                {
                    return "B";
                }
            }
            AMove = !AMove;
        }
        return (moves.size() == 9 ? "Draw" : "Pending");
    }
};