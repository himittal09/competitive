#include <vector>

using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> diffSum(26, 0);
        for (int i=0; i<s.length(); i++)
        {
            diffSum[s[i]-'a']++;
            diffSum[t[i]-'a']--;
        }
        int maxDiff=0;
        for (int i=0;i<26; i++)
        {
            if (diffSum[i] > 0)
            {
                maxDiff += diffSum[i];
            }
        }
        return maxDiff;
    }
};