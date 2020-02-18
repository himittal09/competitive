#include <vector>

using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> sol(num+1, 0);
        for (int i=0; i <= num; i++)
        {
            sol[i] = sol[i >> 1] + (i & 1);
        }
        return sol;
    }
};