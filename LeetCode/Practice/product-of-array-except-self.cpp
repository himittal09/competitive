#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int n = nums.size();
        vector<int> sol(n);
        for (int i {0}, prod {1}; i<n; i++)
        {
            sol[i] = prod;
            prod *= nums[i];
        }
        for (int i {n-1}, prod {1}; i>=0; i--)
        {
            sol[i] *= prod;
            prod *= nums[i];
        }
        return sol;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}();