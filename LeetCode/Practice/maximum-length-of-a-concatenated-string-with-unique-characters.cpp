#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    int calc (const string& str)
    {
        int ans {0}, bittotest {0};
        for (char ch: str)
        {
            bittotest = (1 << (ch - 'a'));
            if (ans & bittotest)
            {
                return 0;
            }
            ans |= bittotest;
        }
        return ans;
    }
public:
    int maxLength(vector<string>& arr) {
        int bittotest {0}, maxans {0}, hash {0};

        vector<int> dp;
        dp.push_back(0);

        for (const string& str: arr)
        {
            hash = calc(str);
            if (!hash)
            {
                continue;
            }
            for (int i=dp.size()-1; i >= 0; i--)
            {
                bittotest = dp[i];
                if ((bittotest & hash) != 0)
                {
                    continue;
                }
                bittotest |= hash;
                dp.push_back(bittotest);
                maxans = max(maxans, bittotest);
            }
        }

        return maxans;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();