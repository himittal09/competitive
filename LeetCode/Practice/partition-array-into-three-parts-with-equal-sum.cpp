#include <vector>

using namespace std;

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int parts=0, tsum=0;
        int sum = accumulate(A.begin(), A.end(), 0);
        if (sum % 3 != 0)
        {
            return false;
        }
        sum /= 3;
        const int minReq {sum == 0 ? 3 : 2};
        for (int i=0; i<A.size() && parts < minReq; i++)
        {
            tsum += A[i];
            if (tsum == sum)
            {
                tsum = 0;
                parts++;
            }
        }
        return parts == minReq;
    }
};