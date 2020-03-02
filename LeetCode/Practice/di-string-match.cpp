#include <vector>

using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> sol;
        int low {0}, high {S.length()};
        for (auto ch: S)
        {
            if (ch == 'I')
            {
                sol.push_back(low);
                low++;
            }
            else
            {
                sol.push_back(high);
                high--;
            }
        }
        sol.push_back(low);
        return sol;
    }
};