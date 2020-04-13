#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    string sortString(string s) {
        vector<int> myMap(26, 0);
        for (auto ch: s)
        {
            myMap[ch - 'a']++;
        }
        string sol;
        while (sol.length() < s.length())
        {
            for (int i=0; i<26; i++)
            {
                if (myMap[i])
                {
                    sol += ('a' + i);
                    myMap[i]--;
                }
            }
            for (int i=25; i>= 0; i--)
            {
                if (myMap[i])
                {
                    sol += ('a' + i);
                    myMap[i]--;
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