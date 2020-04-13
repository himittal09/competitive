#include <cmath>

using namespace std;


class Solution {
    unsigned int f (const unsigned int v)
    {
        return v * (v+1) / 2;
    }
public:
    int arrangeCoins(int n) {
        unsigned int ansApprox = sqrt(((double)n) << 1);
        while (f(ansApprox) > n)
        {
            ansApprox--;
        }
        return ansApprox;
    }
};