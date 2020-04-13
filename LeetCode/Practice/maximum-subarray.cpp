class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current {nums[0]}, global {nums[0]};
        for (int i=1; i<nums.size(); i++)
        {
            current = max(nums[i], current + nums[i]);
            global = max(global, current);
        }
        return global;
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();