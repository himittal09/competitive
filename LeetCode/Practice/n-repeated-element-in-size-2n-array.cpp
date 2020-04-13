class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        if (A[0] == A[3])
        {
            return A[0];
        }
        for (int i=1; i<A.size()-1; i++)
        {
            if (A[i] == A[i-1] || A[i] == A[i+1])
            {
                return A[i];
            }
            else if (A[i-1] == A[i+1])
            {
                return A[i-1];
            }
        }
        return 0;
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();