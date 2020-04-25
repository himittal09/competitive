class Solution {
public:
    int climbStairs(int n) {
        int s1 {1}, s2 {2}, sn {0};
        if (n == 1)
        {
            return s1;
        }
        else if (n == 2)
        {
            return s2;
        }
        while (n-2)
        {
            sn = s1 + s2;
            s1 = s2;
            s2 = sn;
            n--;
        }
        return s2;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}();