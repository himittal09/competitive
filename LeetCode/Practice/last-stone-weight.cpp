#include <iostream>
#include <queue>

using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> myQ(stones.begin(), stones.end());
        int n1 {0}, n2 {0};
        while (myQ.size() > 1)
        {
            n1 = myQ.top();
            myQ.pop();
            n2 = myQ.top();
            myQ.pop();
            n1 = abs(n1-n2);
            if (n1)
            {
                myQ.push(n1);
            }
        }
        return myQ.size() ? myQ.top() : 0;
    }
};
