#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        std::bitset<200001> mySet;
        for (int i=0; i<candies.size(); i++)
        {
            mySet.set(candies[i] + 100000);
        }
        return min(mySet.count(), candies.size() / 2);
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();