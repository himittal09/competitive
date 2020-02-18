#include <vector>

using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0, end=nums.size()-1;
        int mid = start + (end - start) / 2;
        while (start != end)
        {
            if (nums[mid] < nums[start])
            {
                start = start + 1;
                end = mid;
            }
            else
            {
                if (nums[end] < nums[start])
                {
                    start = mid + 1;
                }
                else
                {
                    end = start;
                }
                
            }
            mid = start + (end - start) / 2;
        }
        return nums[start];
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();