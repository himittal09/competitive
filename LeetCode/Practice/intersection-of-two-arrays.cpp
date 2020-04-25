class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> mset(nums1.begin(), nums1.end());
        vector<int> sol;
        for (auto num: nums2)
        {
            if (mset.erase(num) > 0)
            {
                sol.push_back(num);
            }
        }
        return sol;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();