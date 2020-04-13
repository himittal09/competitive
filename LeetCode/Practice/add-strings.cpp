#include <iostream>

using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i {num1.length()-1}, j {num2.length()-1}, temp {0};
        string sol;
        
        for (; i>= 0 || j>=0; i--, j--)
        {
            if (i >= 0)
            {
                temp += (num1[i] - '0');
            }
            if (j >= 0)
            {
                temp += (num2[j] - '0');
            }
            sol = (char)((temp % 10) + '0') + sol;
            temp /= 10;
        }

        return temp ? string("1") + sol : sol; 
    }
};