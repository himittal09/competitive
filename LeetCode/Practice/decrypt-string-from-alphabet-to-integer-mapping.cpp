#include <iostream>
#include <cstring>
using namespace std;

class Solution {
public:
    string freqAlphabets(string s) {
        string solution;
        int index;
        for(int i=s.length()-1; i>=0; i--)
        {
            if (s[i] == '#')
            {
                index = (s[i-2] - '1') * 10 + (s[i-1] - '0');
                solution = (char)('j' + index) + solution;
                i -= 2;
            }
            else
            {
                solution = (char)(s[i] - '1' + 'a') + solution;
            }
        }
        return solution;
    }
};