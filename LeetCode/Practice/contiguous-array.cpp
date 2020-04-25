#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int score {0}, n = nums.size(), maxIndex {0};
        unordered_map<int, int> mymap;
        unordered_map<int, int>::iterator it;
        
        for (int i=0; i<n; i++)
        {
            nums[i] = nums[i] ? ++score : --score;
            if (!score)
            {
                maxIndex = i+1;
            }
            else if ((it = mymap.find(nums[i])) == mymap.end())
            {
                mymap[nums[i]] = i;
            }
            else
            {
                maxIndex = max(maxIndex, (i - (it->second)));
            }
        }

        return maxIndex;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}();