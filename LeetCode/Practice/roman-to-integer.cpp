#include <iostream>

using namespace std;

class Solution {
public:
    int getValue (char ch)
    {
        switch (ch)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        }
    }

    int romanToInt(string s) {
        int sol {0}, lastElementPriority {0}, temp {0};
        for (int i=0; i<s.length(); i++)
        {
            temp = getValue(s[i]);
            sol += temp;
            if (temp > lastElementPriority)
            {
                sol -= 2 * lastElementPriority;
            }
            lastElementPriority = temp;
        }
        return sol;
    }
};