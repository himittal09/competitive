class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start{0},mid {0}, end = nums.size()-1;

        while (start <= end)
        {
            mid = start + (end-start) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return -1;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();