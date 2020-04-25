#include <iostream>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int si {0}, ti {0};
        if (!s.length())
        {
            return true;
        }
        while (ti < t.length())
        {
            if (s[si] == t[ti])
            {
                si++;
            }
            ti++;
            if (si == s.length())
            {
                return true;
            }
        }
        return false;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();