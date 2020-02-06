class Solution {
public:
    int hammingDistance(unsigned int x, unsigned int y) {
        unsigned int diff = x ^ y;
        int ans = 0;
        while (diff)
        {
            ans += diff & 1;
            diff >>= 1;
        }
        return ans;
    }
};