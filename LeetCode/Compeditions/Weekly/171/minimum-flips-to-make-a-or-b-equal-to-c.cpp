class Solution {
public:
    int minFlips(register int a, register int b, register int c) {
        // minimum flips in a or b to reach c
        // complete and correct
        int flips = 0;
        while ((a | b) != c)
        {
            if (((a & 1) | (b & 1)) != (c & 1))
            {
                if (c & 1)
                {
                    flips++;
                }
                else
                {
                    flips += (a & 1);
                    flips += (b & 1);
                }
            }
            a = a >> 1;
            b = b >> 1;
            c = c >> 1;
        }
        return flips;
    }
};