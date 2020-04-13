#include <unordered_map>
#include <vector>
#include <random>

using namespace std;

class Solution {
    unordered_map <int, vector<int>> myMap;
public:
    Solution(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++)
        {
            myMap[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) {
        std::random_device rd;
        std::mt19937 mt(rd());
        std::uniform_int_distribution<unsigned int> dist(0, myMap[target].size()-1);
        unsigned int random_number_generated {dist(mt)};
        return myMap[target][random_number_generated];
    }
};


static auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */