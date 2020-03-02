class Solution {
public:
    int binaryGap(int N) {
        if ((N & (N-1)) == 0)
        {
            return 0;
        }
        int sol {0}, counter {0};
        while (!(N & 1))
        {
            N >>=1;
        }
        while (N)
        {
            counter++;
            if (N & 1)
            {
                sol = max(sol, counter);
                counter = 0;
            }
            N >>= 1;
        }
        return sol;
    }
};