#include <iostream>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int signore {0}, tignore {0};
        for (int sflag = S.length()-1, tflag = T.length()-1; sflag >= 0 || tflag >= 0; sflag--, tflag--)
        {
            for (; sflag >= 0 && (signore || S[sflag] == '#'); sflag--)
            {
                signore += (S[sflag] == '#') ? 1 : -1;
            }
            for (; tflag >= 0 && (tignore || T[tflag] == '#'); tflag--)
            {
                tignore += (T[tflag] == '#') ? 1 : -1;
            }
            if (sflag < 0 && tflag < 0)
            {
                return true;
            }
            if (sflag < 0 || tflag < 0)
            {
                return false;
            }
            if (S[sflag] != T[tflag])
            {
                return false;
            }
        }
        return true;
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();