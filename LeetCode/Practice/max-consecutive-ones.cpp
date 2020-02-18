#include <vector>

using namespace std;

class Solution {
    inline int max (const int a, const int b) const noexcept
    {
        return a >= b ? a : b;
    }
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0, trackIndex = 0;
        for (auto& val: nums)
        {
            if (val == 0)
            {
                maxOnes = max(maxOnes, trackIndex);
                trackIndex = 0;
            }
            else
            {
                trackIndex++;
            }
        }
        maxOnes = max(maxOnes, trackIndex);
        return maxOnes;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();