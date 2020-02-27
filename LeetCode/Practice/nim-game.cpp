#include <iostream>
#include <vector>

using namespace std;

class Solution {
    // O(n)
    int mex (vector<int> vec)
    {
        int ans = 0;
        for (int i=0; i<vec.size(); i++)
        {
            ans ^= (i ^ vec[i]);
        }
        return (ans ^ vec.size());
    }
    
    // 
    int grundy (int num, vector<int>& nimbers)
    {
        if (nimbers[num] == -1)
        {
            nimbers[num] = mex({grundy(num-1, nimbers), grundy(num-2, nimbers), grundy(num-3, nimbers)});
        }
        return nimbers[num];
    }

public:
    bool canWinNim(int n) {
        // input too huge to allocate array
        if (n > 13488206)
        {
            return (n & 3);
        }
        vector<int> nimbers(n+4, -1);
        nimbers[0] = 0;
        nimbers[1] = 1;
        nimbers[2] = 2;
        nimbers[3] = 3;
        return (grundy(n, nimbers) != 0);
    }
};