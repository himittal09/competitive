#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        const int n = customers.size();
        int alreadySatisfied {0}, maxSatisfy {0};
        for (int i=0; i<n; i++)
        {
            if (grumpy[i] == 0)
            {
                alreadySatisfied += customers[i];
            }
        }
        for (int i=0; i<X; i++)
        {
            if (grumpy[i] == 1)
            {
                alreadySatisfied += customers[i];
            }
        }
        maxSatisfy = max(maxSatisfy, alreadySatisfied);
        for (int i=X; i<n; i++)
        {
            if (grumpy[i-X] == 1)
            {
                alreadySatisfied -= customers[i-X];
            }
            if (grumpy[i] == 1)
            {
                alreadySatisfied += customers[i];
            }
            maxSatisfy = max(maxSatisfy, alreadySatisfied);
        }
        return maxSatisfy;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();