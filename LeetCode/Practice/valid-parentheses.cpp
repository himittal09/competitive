#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isOpening (char ch)
    {
        return (ch == '(' || ch == '{' || ch == '[');
    }

    bool isMatching (char open, char close)
    {
        return ((open == '{' && close == '}') || (open == '(' && close == ')') || (open == '[' && close == ']'));
    }

    bool isValid(string s) {
        stack <char> mys;
        bool isValid = true;
        for (char ch: s)
        {
            if (mys.empty() || isOpening(ch))
            {
                mys.push(ch);
            }
            else if (mys.empty() || !isMatching(mys.top(), ch))
            {
                isValid = false;
                break;
            }
            else
            {
                mys.pop();
            }
        }
        return mys.empty() ? isValid : false;
    }
};