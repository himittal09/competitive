#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        uint64_t num = 0;
        vector<bool> sol (A.size(), false);
        for (int i=0; i<A.size(); i++)
        {
            num = (num << 1 + A[i]) % 5;
            if (num == 0)
            {
                sol[i] = true;
            }
        }
        return sol;
    }
};