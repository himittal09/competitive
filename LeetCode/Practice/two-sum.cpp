#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        unordered_map<int, int>::iterator it;
        
        for (int i=0; i<nums.size(); i++)
        {
            it = mymap.find(nums[i]);
            if (it != mymap.end())
            {
                return vector<int> {i, it->second};
            }
            mymap[target - nums[i]] = i;
        }
    }
};