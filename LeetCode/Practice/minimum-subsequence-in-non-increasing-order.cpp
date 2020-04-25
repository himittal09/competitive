#include <vector>
#include <queue>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        priority_queue<int> myQ(nums.begin(), nums.end());
        
        int totalSum = std::accumulate(nums.begin(), nums.end(), 0) / 2;
        int arrSum {0};

        vector<int> sol;
        int topItem {0};

        while (arrSum <= totalSum)
        {
            topItem = myQ.top();
            arrSum += topItem;
            sol.push_back(topItem);
            myQ.pop();
        }

        return sol;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();