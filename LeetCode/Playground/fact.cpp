#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    inline int min (const int n1, const int n2) const noexcept
    {
        return n1 <= n2 ? n1 : n2;
    }

    uint64_t fact (int i) const noexcept
    {
        static vector<uint64_t> factTable(20, 0);
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
        r = min(r, n-r);
        uint64_t num {1}, den {r};
        for (int i=n; i>n-r; i--)
        {
            num *= i;
            if (den > 1 && (num % den == 0))
            {
                num /= den;
                den--;
            }
        }
        return num;
    }
};

int main ()
{
    uint64_t dummy {1};
    for (int i=30; i>=15; i--)
    {
        dummy *= i;
        cout << dummy << endl;
    }
    return 0;
}