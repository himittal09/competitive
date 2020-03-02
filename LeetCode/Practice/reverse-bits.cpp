class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int num {0}, posBit {0};
        for (int i=0; i<32; i++)
        {
            posBit = n & 1;
            num |= (posBit << (31 - i));
            n >>=1;
        }
        return num;
    }
};