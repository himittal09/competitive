class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int counter {0};
        while (m != n)
        {
            counter++;
            m >>= 1;
            n >>= 1;
        }
        return m << counter;
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();