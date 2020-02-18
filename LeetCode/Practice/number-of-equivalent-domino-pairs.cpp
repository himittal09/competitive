#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    inline int nC2 (const int n)
    {
        return (n * (n-1) / 2);
    }
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map <int, int> myMap;
        for (const vector<int>& domino: dominoes)
        {
            if (domino[0] < domino[1])
            {
                myMap[domino[0] * 10 + domino[1]]++;
            }
            else
            {
                myMap[domino[1] * 10 + domino[0]]++;
            }
        }
        int counter=0;
        for (const auto& [key, value]: myMap)
        {
            counter += nC2(value);
        }
        return counter;
    }
};


auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();