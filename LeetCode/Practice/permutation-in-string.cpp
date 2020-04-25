#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
    vector<int> hash;
    inline bool isHashMatching () const noexcept
    {
        return std::all_of(hash.begin(), hash.end(), [](int i){ return i == 0; });
    }
public:
    Solution (): hash(26, 0) {}
    bool checkInclusion(string s1, string s2) {
        const int m=s1.length(), n=s2.length();
        if (m > n)
        {
            return false;
        }
        for (int i=0; i<m; i++)
        {
            hash[s1[i]-'a']++
            hash[s2[i]-'a']--;
        }
        if (isHashMatching())
        {
            return true;
        }
        for (int i=m; i<n; i++)
        {
            hash[s2[i-m]-'a']++;
            hash[s2[i]-'a']--;
            if (isHashMatching())
            {
                return true;
            }
        }
        return false;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}();