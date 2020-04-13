#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        vector<bool> sol (queries.size());
        bool isMatch {true};
        int index {0};
        for (int i=0; i<queries.size(); i++)
        {
            isMatch = true;
            index = 0;
            for (int j=0; isMatch && j<pattern.size(); j++, index++)
            {
                while (index < queries[i].length() && pattern[j] != queries[i][index])
                {
                    index++;
                }
                if (index == queries[i].length())
                {
                    isMatch = false;
                }
            }
            sol[i] = isMatch;
        }
        return sol;
    }
};