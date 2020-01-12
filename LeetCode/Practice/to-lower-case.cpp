#include <iostream>
using namespace std;

class Solution {
public:
    string toLowerCase(string str) {
        for (auto &ch: str)
        {
            if (ch >= 'A' && ch <= 'Z')
            {
                ch += 32;
            }
        }
        return str;
    }
};