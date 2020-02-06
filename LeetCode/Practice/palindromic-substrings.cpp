#include <iostream>

using namespace std;

class Solution {
public:
    int similarStr (int len)
    {
        return (len*(len+1)/2);
    }

    int countSubstrings(string s) {
        int ePos, ls, le;
        int counter=0;
        char ch;
        for (int sPos=0; sPos<s.length(); )
        {
            ch = s[sPos];
            ePos = sPos;
            while (s[ePos] == ch)
            {
                ePos++;
            }
            counter += similarStr(ePos - sPos);
            ls = sPos-1; le = ePos;
            // new mark will be Epos to continue traversal of outer for loop
            while (ls >= 0 && le < s.length() && (s[ls] == s[le]))
            {
                counter++;
                ls--;
                le++;
            }
            sPos = ePos;
        }
        return counter;
    }
};