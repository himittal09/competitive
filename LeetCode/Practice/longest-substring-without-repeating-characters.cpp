#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> myvec(128, -1);
        int fi=0, maxSumSequence=0, temp;
        for (int li=0; li<s.length(); li++)
        {
            temp = myvec[(int)s[li]];
            myvec[(int)s[li]] = li;
            if (temp >= fi)
            {
                fi = temp + 1;
            }
            maxSumSequence = max(maxSumSequence, (li-fi+1));
        }
        return maxSumSequence;
    }
};