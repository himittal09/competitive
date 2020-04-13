#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort (people.begin(), people.end());
        int begin {0}, end{people.size()-1}, counter {0};
        while (begin <= end)
        {
            if (people[begin] + people[end] <= limit)
            {
                begin++;
            }
            counter++;
            end--;
        }
        return counter;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();