#include <bitset>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> sol;
        for (int h=0; h<12; h++)
        {
            for (int m=0; m<60; m++)
            {
                if (bitset<32>((h << 8) | m).count() == num)
                {
                    string temp = to_string(h) + string(m < 10 ? ":0" : ":") + to_string(m);
                    sol.push_back(temp);
                }
            }
        }
        return sol;
    }
};