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
        diff = aSum - bSum;
        diff >>= 1;
        for (int& bVal: B)
        {
            if (binary_search(A.begin(), A.end(), bVal + diff))
            {
                return {bVal+diff, bVal};
            }
        }
        return {0, 0};
    }
};