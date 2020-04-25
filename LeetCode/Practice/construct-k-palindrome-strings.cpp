#include <iostream>
#include <numeric>

using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k)
        {
            return false;
        }
        int bucket[26] = {0};
        for (char ch: s)
        {
            bucket[ch - 'a'] ^= 1;
        }
        return (k >= std::accumulate(bucket, bucket + 26, 0));
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();