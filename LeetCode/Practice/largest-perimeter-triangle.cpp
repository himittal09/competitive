#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

class Solution {
public:
    int largestPerimeter(vector<int>& A)
    {
        sort(A.begin(), A.end(), greater<int>());
        const int n = A.size() - 2;
        for (int i=0; i<n; i++)
        {
            if (A[i] >= (A[i+1] + A[i+2]))
            {
                continue;
            }
            return (A[i] + A[i+1] + A[i+2]);
        }
        return 0;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();