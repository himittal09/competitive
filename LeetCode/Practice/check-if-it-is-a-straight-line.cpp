#include <vector>
#include <numeric>
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        const double k = (coordinates[1][0] - coordinates[0][0]) ? static_cast<double>((coordinates[1][1] - coordinates[0][1]) / (coordinates[1][0] - coordinates[0][0])) : 0.0;
        const double b = coordinates[0][1] - k * coordinates[0][0];
        return std::all_of(std::next(coordinates.begin()+2), coordinates.end(), [k, b](const auto& coordinate)->bool{
            return std::abs(coordinate[1] - k * coordinate[0] - b) <= std::numeric_limits<double>::epsilon();
        });
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}();