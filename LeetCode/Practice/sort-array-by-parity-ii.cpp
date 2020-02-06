#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        for (int i=0, oi=1; i<A.size(); i += 2)
        {
            if (A[i] & 1)
            {
                for (; A[oi] & 1; oi += 2);
                swap(A[i], A[oi]);
            }
        }
        return A;
    }
};