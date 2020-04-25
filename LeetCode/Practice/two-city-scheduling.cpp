#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(), costs.end(), [](const vector<int>& v1, const vector<int>& v2) {
            int v1factor = v1[0] - v1[1];
            int v2factor = v2[0] - v2[1];
            return v1factor < v2factor;
        });
        int cost {0};
        const int n = costs.size() / 2;
        for (int i=0; i<n; i++)
        {
            cost += costs[i][0];
        }
        for (int i=n; i<(2*n);i++)
        {
            cost += costs[i][1];
        }
        return cost;
    }
};


auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}();