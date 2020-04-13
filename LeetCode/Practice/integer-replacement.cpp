#include <iostream>
using namespace std;

class Solution {
public:
    int integerReplacement(int n) {
        if (n == INT_MAX)
        {
            return 32;
        }
        int counter {0}, onec, nc;
        for (; n != 1; counter++)
        {
            if ((n & 1) == 0)
            {
                n >>= 1;
            }
            else if (n == 3 || (n & 2) == 0)
            {
                --n;
            }
            else
            {
                
                ++n;
            }
        }
        return counter;
    }
};
