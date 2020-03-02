class Solution {
    int hammingWeight(uint32_t x) {
        x = x - ((x >> 1) & 0x55555555);
        x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
        x = x + (x >> 4);
        x &= 0xF0F0F0F;
        return (x * 0x01010101) >> 24;
    }

    bool isPrime (int num)
    {
        // 
        static vector<bool> statArray {{
            false, false, true, true,
            false, true, false, true,
            false, false, false, true,
            false, true, false, false,
            false, true, false, true,
            false, false, false, true,
            false, false, false, false,
            false, true, false, true
        }};
        return statArray[num];
    }
public:
    int countPrimeSetBits(int L, int R) {
        int counter {0};
        for (int i {L}; i <= R; i++)
        {
            if (isPrime(hammingWeight(i)))
            {
                counter++;
            }
        }
        return counter;
    }
};