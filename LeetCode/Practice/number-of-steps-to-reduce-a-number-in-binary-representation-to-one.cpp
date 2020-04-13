#include <iostream>

using namespace std;

class Solution {
public:
    int numSteps(string s) {
        int steps {0}, index = s.length()-1, onecount{0}, temp;
        while (index >= 0)
        {
            steps += (s[index] - '0');
            temp = steps;
            for (; index >= 0 && s[index] == '1'; index--, steps++, onecount++);
            if (index >= 0 && temp != steps) s[index] = '1';
            for (; index >= 0 && s[index] == '0'; index--, steps++);
        }
        return ((onecount == 1) ? steps-2 : steps);
    }
};