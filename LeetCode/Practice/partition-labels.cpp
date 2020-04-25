#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string S) {
        using mypair = std::pair<int, int>;
        vector<mypair> arr(26, {-1, -1});
        for (int i=0; i<S.length(); i++)
        {
            int index = S[i] - 'a';
            if (arr[index].first == -1)
            {
                arr[index].first = i;
            }
            arr[index].second = i;
        }
        sort(arr.begin(), arr.end(), [](const mypair& p1, const mypair& p2) -> bool {
            return p1 < p2;
        });
        vector<int> sol;
        for (int i=0; i<26; i++)
        {
            if (arr[i].first == -1)
            {
                continue;
            }
            if (arr[i].first == arr[i].second)
            {
                sol.push_back(1);
            }
            else
            {
                int span = arr[i].second;
                int beginning = arr[i].first;
                for (; i<25 && arr[i+1].first < span; i++)
                {
                    span = max(span, arr[i+1].second);
                }
                sol.push_back(span - beginning + 1);
            }
        }
        return sol;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();