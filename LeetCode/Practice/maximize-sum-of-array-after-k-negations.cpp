#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        std::sort(A.begin(), A.end());
        int sum {0}, minValue = INT_MAX;
        for (auto it = 0; it < A.size() && K && A[it] < 0; it++, K--)
        {
            A[it] = -A[it];
        }
        for (int i=0; i<A.size(); i++)
        {
            sum += A[i];
            minValue = min(minValue, A[i]);
        }
        return sum - (2 * minValue * (K & 1));
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();