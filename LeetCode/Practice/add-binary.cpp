#include <iostream>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1, j=b.length()-1, temp {0};

        string sol;

        for (; i>= 0 && j >= 0; i--, j--)
        {
            temp += (a[i] - '0');
            temp += (b[j] - '0');
            sol = (char)((temp % 2) + '0') + sol;
            temp /= 2;
        }

        for (;j >= 0; j--)
        {
            temp += (b[j] - '0');
            sol = (char)((temp % 2) + '0') + sol;
            temp /= 2;
        }

        for (; i >= 0; i--)
        {
            temp += (a[i] - '0');
            sol = (char)((temp % 2) + '0') + sol;
            temp /= 2;
        }

        return temp ? string("1") + sol : sol;
    }
};