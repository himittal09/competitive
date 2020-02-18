#include <vector>
#include <unordered_set>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mySet(nums.begin(), nums.end());
        return mySet.size() != nums.size();
    }
};