#include <algorithm>

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int buck[26] = {0};
        for (char ch: text) buck[ch - 'a']++;
        return std::min({buck[0], buck[1], buck[11] / 2, buck[13], buck[14] / 2});
    }
};