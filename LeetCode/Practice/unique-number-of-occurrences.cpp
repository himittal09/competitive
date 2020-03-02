#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int, int> myMap;
        unordered_set <int> mySet;
        for (auto val: arr)
        {
            myMap[val]++;
        }
        for (const auto [key, value]: myMap)
        {
            if (!mySet.insert(value).second)
            {
                return false;
            }
        }
        return true;
    }
};