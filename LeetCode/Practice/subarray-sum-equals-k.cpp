class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int, int> mymap;
        int sum {0}, counter {0};
        mymap[0]++;
        for (auto num: nums)
        {
            sum += num;
            counter += mymap[sum - k];
            mymap[sum]++;
        }
        return counter;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();