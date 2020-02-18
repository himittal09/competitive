#include <cstring>
#include <vector>
#include <ctype.h>

using namespace std;

class Solution {
    int whatRow (char ch)
    {
        if (strchr("qwertyuiop",tolower(ch)) != nullptr)
        {
            return 0;
        }
        else if (strchr("asdfghjkl", tolower(ch)) != nullptr)
        {
            return 1;
        }
        return 2;
    }

    bool singleRow (string& word)
    {
        vector<bool> rowTrack(3, false);
        bool row1 = false, row2 = false, row3 = false;
        rowTrack[whatRow(word[0])] = true;
        for (int i=1; i<word.length(); i++)
        {
            rowTrack[whatRow(word[i])] = true;
            if ((rowTrack[0] ^ rowTrack[1] ^ rowTrack[2]) == false)
            {
                return false;
            }
        }
        return true;
    }
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> sol;
        for (auto& word: words)
        {
            if (singleRow(word))
            {
                sol.push_back(word);
            }
        }
        return sol;
    }
};