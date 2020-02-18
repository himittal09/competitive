#include <vector>

using namespace std;

class Solution {
    inline int max (const int a, const int b) const noexcept
    {
        return a >= b ? a : b;
    }
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        // iterate recursively
        int warmest=0, warmestLoc=T.size()-1;
        for (int i=T.size()-1; i >= 0; i--)
        {
            if (T[i] >= warmest)
            {
                // reduce current loc to 0
                warmest = T[i];
                warmestLoc = i;
                T[i] = 0;
            }
            else
            {
                // run a iterator through i+1 to warmestLoc
                // find an j such that j > i && T[j] > T[i]
                for (int j=i+1; j<= warmestLoc; j++)
                {
                    if (T[j] > T[i])
                    {
                        T[i] = j - i;
                        break;
                    }
                }
            }
        }
        return T;
    }
};