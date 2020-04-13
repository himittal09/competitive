#include <vector>

using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {

        for (int i = A.size()-1; i >= 0 && K; i--)
        {
            A[i] += K;
            K = A[i] / 10;
            A[i] %= 10;
        }

        while (K)
        {
            A.insert(A.begin(), K % 10);
            K /= 10;
        }

        return A;
    }
};

static auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();