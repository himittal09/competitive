#include <climits>
#include <vector>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestSharePrice = 0;
        int minIndex=0, maxIndex=1;
        for (int i=0; i<prices.size(); i++)
        {
            if (prices[i] - prices[minIndex] > bestSharePrice)
            {
                maxIndex = i;
                bestSharePrice = prices[maxIndex] - prices[minIndex];
            }
            if (prices[maxIndex] - prices[i] > bestSharePrice && i < maxIndex)
            {
                minIndex = i;
                bestSharePrice = prices[maxIndex] - prices[minIndex];
            }
        }
        return bestSharePrice;
    }
};