#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    string convertToTitle(int n) {
        string sol;
        int counter26 {pow(26, 1)};
        while (n)
        {
            sol += ('A' + ((n / 26) - 1));
        }
        return sol;
    }
};