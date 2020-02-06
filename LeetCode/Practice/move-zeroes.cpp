#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroCount=0, wholeArrayFlag=0, shiftFlag = 0;
        for (; wholeArrayFlag < nums.size(); wholeArrayFlag++)
        {
            if (nums[wholeArrayFlag] != 0)
            {
                nums[shiftFlag] = nums[wholeArrayFlag];
                shiftFlag++;
                zeroCount++;
            }
        }
        for (; shiftFlag < nums.size(); shiftFlag++)
        {
            nums[shiftFlag] = 0;
        }
    }
};