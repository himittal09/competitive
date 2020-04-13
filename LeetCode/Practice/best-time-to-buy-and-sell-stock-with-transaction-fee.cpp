#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int buy {0}, sell {0}, i{0}, profit {0};
        const int N = prices.size()-1;
        while (i < N)
        {
            while (i < N && prices[i+1] < prices[i])
            {
                i++;
            }
            buy = prices[i];
            while (i < N && prices[i+1] > prices[i])
            {
                i++;
            }
            sell = prices[i];
            if (sell - buy > fee)
            {
                profit += ((sell - buy) - fee);
            }
        }
        return profit;
    }
};