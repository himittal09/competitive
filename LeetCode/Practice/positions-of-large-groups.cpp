#include <map>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        map<char, vector< vector<int> > > myMap;
        int start=0;
        for (int i=0; i<S.length(); i++)
        {
            if (S[i] != S[start])
            {
                if (i - start >= 3)
                {
                    myMap[S[start]].push_back( {start, i-1} );
                }
                start = i;
            }
        }
        vector<vector<int> > solution;
        for (const auto& [key, value]: myMap) {
            solution.insert(solution.end(), value.begin(), value.end());
        }
        return solution;
    }
};