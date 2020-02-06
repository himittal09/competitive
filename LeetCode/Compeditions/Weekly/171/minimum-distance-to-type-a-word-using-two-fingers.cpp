#include <cmath>
using namespace std;

class Solution {
public:
    // wrong
    int minimumDistance(string word) {
        int distance = 0;
        int cpi, ppi;
        int pointloc[][] = {
                {0, 0},
                {0, 1},
                {0, 2},
                {0, 3},
                {0, 4},
                {0, 5},
                {1, 0},
                {1, 1},
                {1, 2},
                {1, 3},
                {1, 4},
                {1, 5},
                {2, 0},
                {2, 1},
                {2, 2},
                {2, 3},
                {2, 4},
                {2, 5},
                {3, 0},
                {3, 1},
                {3, 2},
                {3, 3},
                {3, 4},
                {3, 5},
                {4, 0},
                {4, 1}
            };
        for (int i=1; i<word.length(); i++)
        {
            cpi = word[i] - 'A';
            ppi = word[i-1] - 'A';
            distance += abs(pointloc[cpi][0] - pointloc[ppi][0]) + abs(pointloc[cpi][1] - pointloc[ppi][1]);
        }
        return distance;
    }
};