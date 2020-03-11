#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    int titleToNumber(string s) {
        int counter26 {pow(26, s.length()-1)}, sol {0};
        for (int i=0; i<s.length(); i++, counter26 /= 26)
        {
            sol += (counter26 * (s[i] - 'A' + 1));
        }
        return sol;
    }
};