class Solution {
public:
    int hammingWeight(uint32_t x) {
        x = x - ((x >> 1) & 0x55555555);
        x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
        x = x + (x >> 4);
        x &= 0xF0F0F0F;
        return (x * 0x01010101) >> 24;
    }
};