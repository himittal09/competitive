#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0)
        {
            return 0;
        }
        int trackIndex=0;
        for (int i=0; i<nums.size(); i++)
        {
            if (nums[i] != nums[trackIndex])
            {
                nums[trackIndex+1] = nums[i];
                trackIndex++;
            }
        }
        return trackIndex+1;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();