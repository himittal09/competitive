#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

class Solution {
public:
    int numTimesAllBlue(vector<int>& light) {
        int track {INT_MIN}, counter {0};
        for (int i=0; i<light.size(); i++)
        {
            track = max(track, light[i]);
            if (track - 1 == i)
            {
                counter++;
            }
            // track ^= ((i+1) ^ light[i]);
            // if (track == 0)
            // {
            //     counter++;
            // }
        }
        return counter;
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();