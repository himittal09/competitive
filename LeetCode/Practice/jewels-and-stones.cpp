#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {        
        int jewels=0;
        for (char jewel: J)
        {
            jewels += std::count(S.begin(), S.end(), jewel);
        }
        return jewels;
    }
};