class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones {0}, twos {0}, mask {0};

        // 7 ops
        for (auto num: nums)
        {
            twos |= (num & ones);
            ones ^= num;
            mask = ~(ones & twos);
            ones &= mask;
            twos &= mask;
        }

        return ones;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}();