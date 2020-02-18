#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
    inline int min (const int i, const int j) const noexcept
    {
        return i <= j ? i : j;
    }
public:
    int sumSubarrayMins(vector<int>& A) {
        register int minElement = INT_MAX;
        register int sum = 0;
        for (register int i=0; i<A.size()-1; i++)
        {
            minElement = min(minElement, A[i]);
            sum = (sum + ((minElement % 1000000007) * ((i+1) % 1000000007))) % 1000000007;
        }
        minElement = INT_MAX;
        for (register int i=A.size()-1; i>=0; i--)
        {
            minElement = min(minElement, A[i]);
            sum = (sum + (minElement % 1000000007)) % 1000000007;
        }
        return sum;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();