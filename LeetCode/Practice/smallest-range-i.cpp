class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int mMin = A[0], mMax = A[0];
        for (int x: A) {
            mMin = min(mMin, x);
            mMax = max(mMax, x);
        }
        return max(0, mMax-mMin-2*K);
    }
};

auto speedup = [](){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();