#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shiftVec) {
        const int n = s.length();
        int shift {0};
        
        for (auto q: shiftVec)
        {
            shift += (q[0] ? -q[1] : q[1]);
        }

        shift = (n + (shift % n)) % n;

        if (!shift)
        {
            return s;
        }
        
        return s.substr(shift, string::npos) + s.substr(0, shift);
    }
};