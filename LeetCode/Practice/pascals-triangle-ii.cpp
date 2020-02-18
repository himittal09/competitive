#include <vector>

using namespace std;

class Solution {
    inline int min (const int n1, const int n2) const noexcept
    {
        return n1 <= n2 ? n1 : n2;
    }

    uint64_t fact (int i) const noexcept
    {
        static vector<uint64_t> factTable(33, 0);
        factTable[0] = 1;
        if (factTable[i])
        {
            return factTable[i];
        }
        factTable[i] = i * fact(i-1);
        return factTable[i];
    }

    int nCr (int n, int r) const noexcept
    {
        static vector<int> combinationTable(33, 0);
        r = min(r, n-r);
        if (combinationTable[r])
        {
            return combinationTable[r];
        }
        uint64_t num=1, den=1;
        den = fact(r);
        for (int i=n; i>n-r; i--)
        {
            num *= i;
        }
        combinationTable[r] = num / den;
        return combinationTable[r];
    }
public:
    vector<int> getRow(int rowIndex) {
        vector<int> sol(rowIndex+1, 1);
        for (int i=1; i<rowIndex; i++)
        {
            sol[i] = nCr(rowIndex, i);
        }
        return sol;
    }
};