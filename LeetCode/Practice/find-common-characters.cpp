#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> soln;
        int minAppear[26];
        int tempCount[26] = {0};
        for (int i=0; i<26; i++)
        {
            minAppear[i] = INT_MAX;
        }
        for (string& str: A)
        {
            for (char ch: str)
            {
                tempCount[ch - 'a']++;
            }
            for (int i=0; i<26; i++)
            {
                minAppear[i] = min(minAppear[i], tempCount[i]);
                tempCount[i] = 0;
            }
        }
        for (int i=0; i<26; i++)
        {
            soln.insert(soln.end(), minAppear[i], string(1, (char)(i + 97)));
        }
        return soln;
    }
};

int main ()
{
    Solution sol;
    return 0;
}