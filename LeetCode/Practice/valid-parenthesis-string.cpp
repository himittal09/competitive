#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        const int n = s.length();
        vector<int> pos;
        int counter {0}, spos, i;
        for (int i=0; i<n; i++)
        {
            if (s[i] == '(')
            {
                pos.push_back(i);
            }
            else if (s[i] == '*')
            {
                continue;
            }
            else
            {
                if (pos.size() != 0)
                {
                    s[pos.back()] = ' ';
                    pos.pop_back();
                    s[i] = ' ';
                }
            }
        }
        for (int i=n-1; i>=0 && pos.size(); i--)
        {
            if (s[i] == '*' && i > pos.back())
            {
                s[i] = ' ';
                s[pos.back()] = ' ';
                pos.pop_back();
            }
        }
        if (pos.size())
        {
            return false;
        }
        for (int i=0; i<n; i++)
        {
            if (s[i] == ' ')
            {
                continue;
            }
            else if (s[i] == '*')
            {
                counter++;
            }
            else if (s[i] == ')')
            {
                counter--;
                if (counter < 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
};