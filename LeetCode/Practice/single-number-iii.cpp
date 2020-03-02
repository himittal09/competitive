class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int completeXor {0}, num1 {0}, num2 {0}, mask {1};
        for (int val: nums)
        {
            completeXor ^= val;
        }
        mask = (completeXor & (completeXor -1)) ^ completeXor;
        for (int val: nums)
        {
            if (val & mask)
            {
                num1 ^= val;
            }
            else
            {
                num2 ^= val;
            }
        }
        return {num1, num2};
    }
};