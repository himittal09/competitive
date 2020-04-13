#include <unordered_set>

using namespace std;

class Solution {
    int nextProcess (int num) const noexcept
    {
        int ans {0}, temp {0};
        while (num)
        {
            temp = num % 10;
            ans += (temp * temp);
            num /= 10;
        }
        return ans;
    }
public:
    // a number will be checked for a mximum of 1000 times
    bool isHappy(int n, int next=1000) {
        static unordered_set<int> happySet {{1, 10, 100, 1000, 10000, 19, 82, 68, 7}};
        if (happySet.find(n) != happySet.end())
        {
            return true;
        }
        int result = nextProcess(n);
        if (result == 1)
        {
            happySet.insert(n);
            return true;
        }
        else if (next == 0)
        {
            return false;
        }
        else
        {
            bool asss = isHappy(result, next - 1);
            if (asss = true)
            {
                happySet.insert(result);
            }
            return asss;
        }
    }
};