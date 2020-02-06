#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > matrixReshape(vector<vector<int> >& nums, int r, int c) {
        if ((r*c) != (nums.size() * nums[0].size()))
        {
            return nums;
        }
        vector<vector<int> > soln(r, vector<int>(c, 0));
        int counter=0;
        while (counter < (r*c))
        {
            soln[counter / c][counter % c] = nums[counter / nums.size()][counter % nums.size()];
            counter++;
        }
        return soln;
    }
};
