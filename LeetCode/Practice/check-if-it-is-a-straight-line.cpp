#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x {coordinates[1][0] - coordinates[0][0]};
        int y {coordinates[1][1] - coordinates[0][1]};
        int gcd {std::gcd(x, y)};
        const int xDiff {xDiff / gcd};
        const int yDiff {yDiff / gcd};
        for (int i=2; i<coordinates.size(); i++)
        {
            x = coordinates[i][0] -  coordinates[i-1][0];
            y = coordinates[i][1] -  coordinates[i-1][1];
            // x = x % xDiff;
            // y = y % yDiff;
            if ((x | y) || (x != y))
            {
                return false;
            }
        }
        return true;
    }
};