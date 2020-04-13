#include <iostream>

using namespace std;

class Solution {
    string sol;
    using pos = pair<int, int>;
    pos getXPath (char ch)
    {
        int x = ch - 'a';
        return make_pair( x/5 , x%5 );
    }
    
    void moveHorizontally (int src, int dest)
    {
        if (src != dest)
        {
            if (src < dest)
            {
                // R
                sol += string(dest - src, 'R');
            }
            else
            {
                // L
                sol += string(src - dest, 'L');
            }
        }
    }

    void moveVertically (int src, int dest)
    {
        if (src != dest)
        {
            if (src < dest)
            {
                // D
                sol += string(dest - src, 'D');
            }
            else
            {
                // U
                sol += string(src - dest, 'U');
            }
        }
    }
public:
    string alphabetBoardPath(string target) {
        sol = "";
        pos tempPos, currentPos = make_pair(0, 0);
        for (auto ch: target)
        {
            tempPos = getXPath(ch);
            // moving away from z, move vertically first
            if (currentPos.first == 5)
            {
                moveVertically(currentPos.first, tempPos.first);        
                moveHorizontally(currentPos.second, tempPos.second);
            }
            else
            {
                moveHorizontally(currentPos.second, tempPos.second);
                moveVertically(currentPos.first, tempPos.first);        
            }
            currentPos = tempPos;
            sol += '!';
        }
        return sol;
    }
};