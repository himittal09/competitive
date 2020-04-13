#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        int alphaCount {0}, loopCount {0}, bit;
        for (char ch: S)
        {
            if (isalpha(ch))
            {
                alphaCount++;
            }
        }
        loopCount = (1 << alphaCount);
        vector<string> sol (loopCount, S);
        for (int i=0; i<loopCount; i++)
        {
            alphaCount = 0;
            for (auto& ch: sol[i])
            {
                if (isalpha(ch))
                {
                    bit = i & (1 << alphaCount);
                    ch = bit ? (ch ^ 32) : ch;
                    alphaCount++;
                }
            }
        }
        return sol;
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();