#include <vector>

using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        if (tokens.size() == 0)
        {
            return 0;
        }
        sort(tokens.begin(), tokens.end());
        int start = 0, end = tokens.size() - 1, points {0};
        while (start <= end)
        {
            if ((P - tokens[start]) >= 0)
            {
                points++;
                P -= tokens[start];
                start++;
            }
            else if (points > 0 && start != end)
            {
                P += tokens[end];
                end--;
                points--;
            }
            else
            {
                break;
            }
        }
        return points;
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();