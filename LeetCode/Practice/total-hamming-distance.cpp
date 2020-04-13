#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int arr[32] = {0};

        // complexity: O(32n)
        for (int num: nums)
        {
            for (int pos=0; num; pos++, num >>= 1)
            {
                arr[pos] += (num & 1);
            }
        }

        int ans {0};
        for (int i=0; i<32; i++)
        {
            ans += (arr[i] * (nums.size() - arr[i]));
        }
        return ans;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();