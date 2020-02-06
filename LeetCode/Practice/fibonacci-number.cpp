class Solution {
public:
    int fib(int N) {
        /* iterative solution */
        int one = 0, two = 1, three;
        while (N-- > 0)
        {
            three = one + two;
            one = two;
            two = three;
        }
        return one;
        
        
        
        /* memoized solution below */
        static int memo[31] = {0, 1, 0};
        if (!N || memo[N])
        {
            return memo[N];
        }
        memo[N] = fib(N-1) + fib(N-2);
        return memo[N];
    }
};