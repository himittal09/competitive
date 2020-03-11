#include <iostream>
#include <cctype>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if (word.length() == 1)
        {
            return true;
        }
        const bool caseFlag {isupper(word[1])};
        for (int i {1}; i<word.length(); i++)
        {
            if (caseFlag != static_cast<bool>(isupper(word[i])))
            {
                return false;
            }
        }
        if (caseFlag && islower(word[0]))
        {
            return false;
        }
        return true;
    }
};