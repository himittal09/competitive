#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> myMap;
        vector<vector<int>> sol;
        for (int i=0; i<groupSizes.size(); i++)
        {
            myMap[groupSizes[i]].push_back(i);
            if (myMap[groupSizes[i]].size() == groupSizes[i])
            {
                sol.push_back(std::move(myMap[groupSizes[i]]));
            }
        }
        return sol;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();