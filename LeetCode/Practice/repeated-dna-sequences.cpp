#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        const int n = s.length();
        constexpr int mask = 0x3FFFFFFF;
        vector<string> sol;
        unordered_map<int, int> myMap;
        uint64_t rollingHash {0};
        if (n < 10)
        {
            return sol;
        }
        for (int i=0; i<10; i++)
        {
            rollingHash = ((rollingHash << 3) | (s[i] & 7)) & mask;
        }
        myMap[rollingHash]++;
        for (int i=10; i<n; i++)
        {
            rollingHash = ((rollingHash << 3) | (s[i] & 7)) & mask;
            if (myMap[rollingHash]++ == 1)
            {
                sol.push_back(s.substr(i-9, 10));
            }
        }
        return sol;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}();