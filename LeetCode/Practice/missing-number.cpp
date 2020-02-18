#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorValue = 0;
        for (int i=0; i<nums.size(); i++)
        {
            xorValue ^= (i ^ nums[i]);
        }
        return (xorValue ^ nums.size());
    }
};