#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sol(nums1.size()+nums2.size());
        auto it = set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), sol.begin());
        sol.resize(it - sol.begin());
        return sol;
    }
};