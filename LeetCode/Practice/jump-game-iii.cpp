#include <vector>
#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;

class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int> indices;
        int temp {0};
        indices.push(start);
        while (!indices.empty())
        {
            temp = indices.front();
            indices.pop();
            if (arr[temp] == 0)
            {
                return true;
            }
            // mark current index visited
            if ((temp + arr[temp]) < arr.size())
            {
                indices.push(min(static_cast<int>(arr.size())-1, temp + arr[temp]));
            }
            if ((temp - arr[temp]) >= 0)
            {
                indices.push(max(0, temp - arr[temp]));
            }
            arr[temp] = arr.size();
        }
        return false;
    }
};

static auto speedup = [](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();