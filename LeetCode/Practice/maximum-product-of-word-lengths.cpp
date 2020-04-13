#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<uint32_t> hashArray (words.size(), 0);
        
        for (auto& hash: hashArray)
        {
            for (char ch: words[i])
            {
                hash |= (1 << (ch - 'a'));
            }
        }

        int maxAns {0};

        for (int i=0; i<hashArray.size(); i++)
        {
            for (int j=i+1; j<hashArray.size(); j++)
            {
                if ((hashArray[i] & hashArray[j]) == 0)
                {
                    maxAns = max(maxAns, static_cast<int>(words[i].size() * words[j].size()));
                }
            }
        }

        return maxAns;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();
