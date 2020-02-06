#include <vector>
#include <numeric>

using namespace std;

class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int aSum=0, bSum=0, diff = 0;
        aSum = accumulate(A.begin(), A.end(), 0);
        bSum = accumulate(B.begin(), B.end(), 0);
        diff = aSum - bSum;
        if (diff > 0)
        {
            // a has more candy
        }
        else
        {
            // b has more candy
        }
        
    }
};