#include <unordered_map>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr) {

        unordered_map<int, int> mymap;
        for (const int val: arr)
        {
            mymap[val]++;
        }

        priority_queue<int> setOfWords;

        for (const auto& [key, value]: mymap)
        {
            setOfWords.push(value);
        }

        int ct2 {0};
        double counter {0.0};
        const double halfn = static_cast<double>(arr.size()) / 2.0;

        while (counter < halfn)
        {
            counter += static_cast<double>(setOfWords.top());
            ct2++;            
            setOfWords.pop();
        }

        return ct2;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}();