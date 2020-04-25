class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int bucket[102]= {0};
        for (int num: nums)
        {
            bucket[num+1]++;
        }

        for (int i=1; i<102; i++)
        {
            bucket[i] += bucket[i-1];
        }

        for (int i=0; i<nums.size(); i++)
        {
            nums[i] = bucket[nums[i]];
        }

        return nums;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();