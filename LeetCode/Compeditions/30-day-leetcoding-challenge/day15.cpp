#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod {1};
        const int n = nums.size();
        vector<int> sol(n, 1);
        for (int i=0; i<n; i++)
        {
            sol[i] = prod;
            prod *= nums[i];
        }
        prod = 1;
        for (int i=n-1; i>=0; i--)
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