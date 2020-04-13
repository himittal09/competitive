#include <stack>

using namespace std;

class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> mys;
        for (auto ch: S)
        {
            if (ch == '(')
            {
                mys.push(ch);
            }
            else
            {
                if (mys.empty() || mys.top() == ')')
                {
                    mys.push(ch);
                }
                else (mys.top() == '(')
                {
                    mys.pop();
                }
            }
        }
        return mys.size();
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();