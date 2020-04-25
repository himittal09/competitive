#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    int scoreOfParentheses(string S) {
        int pc {0}, cscore {0};
        stack<pair<int, int>> mergePoints;
        for (char ch: S)
        {
            if (ch == '(')
            {
                if (cscore)
                {
                    mergePoints.push(make_pair(pc, cscore));
                }
                pc++;
                cscore = 0;
            }
            else
            {
                pc--;
                cscore = cscore ? (cscore << 1) : 1;
                if (!mergePoints.empty() && pc == mergePoints.top().first)
                {
                    cscore += mergePoints.top().second;
                    mergePoints.pop();
                }
            }
        }
        return cscore;
    }
};