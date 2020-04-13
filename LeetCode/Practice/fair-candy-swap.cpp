#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int aSum=0, bSum=0, diff = 0;
        aSum = accumulate(A.begin(), A.end(), 0);
        bSum = accumulate(B.begin(), B.end(), 0);
        sort(B.begin(), B.end());
        diff = aSum - bSum;
        diff >>= 1;
        for (int aVal: A)
        {
            if (binary_search(B.begin(), B.end(), aVal - diff))
            {
                return vector<int>{aVal, aVal - diff};
            }
        }
        return {0, 0};
    }
};

auto speedup = [](){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    return 0;
}();