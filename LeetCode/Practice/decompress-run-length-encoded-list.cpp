#include <vector>
using namespace std;

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> soln;
        for (int i=0; i<nums.size(); i += 2)
        {
            soln.insert(soln.begin(), nums[i], nums[i+1]);
        }
        return soln;
    }
};