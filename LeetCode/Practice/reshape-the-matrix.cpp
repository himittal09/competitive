#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > matrixReshape(vector<vector<int> >& nums, int r, int c) {
        const int oldr = nums.size(), oldc = nums[0].size(), newsize = r*c;
        
        if ((r*c) != (oldr*oldc))
        {
            return nums;
        }
        
        vector<vector<int>> soln(r, vector<int>(c, 0));
        
        for (int counter=0; counter < newsize; counter++)
        {
            soln[counter / c][counter % c] = nums[counter / oldc][counter % oldc];
        }
        
        return soln;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();