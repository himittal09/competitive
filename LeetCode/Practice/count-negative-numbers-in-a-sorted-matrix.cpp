#include <vector>

using namespace std;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int counter {0}, negPos {0};
        for (auto& val: grid)
        {
            while (negPos < val.size() && val[negPos] > 0)
            {
                negPos++;
            }
            counter += (val.size() - negPos + 1);
        }
        return counter;
    }
};