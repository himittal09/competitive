class Solution {
public:
    bool hasAlternatingBits(int n) {
        n ^= (n >> 1);
        if (n == INT_MAX)
        {
            return true;
        }
        return (n & (n+1)) == 0;
    }
};