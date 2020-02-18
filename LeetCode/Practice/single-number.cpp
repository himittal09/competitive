class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num=0;
        for (auto val: nums)
        {
            num ^= val;
        }
        return num;
    }
};