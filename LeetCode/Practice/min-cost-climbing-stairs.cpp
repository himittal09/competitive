#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        const int n = cost.size();
        vector<int> costLadder (n, 0);
        costLadder[n-1] = cost[n-1];
        costLadder[n-2] = cost[n-2];
        for (int i=n-3; i>=0; i--)
        {
            costLadder[i] = cost[i] + min(costLadder[i+1], costLadder[i+2]);
        }
        return min(costLadder[0], costLadder[1]);
    }
};

auto speedup = [](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();