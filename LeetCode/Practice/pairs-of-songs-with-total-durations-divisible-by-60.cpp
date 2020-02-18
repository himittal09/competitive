#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    inline int nC2 (const int n) const noexcept
    {
        return n * (n-1) / 2;
    }
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map <int, int> myMap;
        int pairCount=0;
        for(const auto& val: time)
        {
            myMap[val % 60]++;
        }
        pairCount += nC2(myMap[0]);
        pairCount += nC2(myMap[30]);
        for(int i=1; i<30; i++)
        {
            pairCount += (myMap[i] * myMap[60-i]);
        }
        return pairCount;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();