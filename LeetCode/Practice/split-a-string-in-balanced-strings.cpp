#include <iostream>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int counter=0, bal=0;
        for (char ch: s)
        {
            bal += (ch == 'R') ? 1 :-1;
            if (bal == 0)
            {
                counter++;
            }
        }
        return counter;
    }
};