#include <cmath>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        unsigned int bucket[10001] = {0};
        for (auto val: A)
        {
            bucket[abs(val)]++;
        }
        int flag = 0;
        for (int i=0; i<10001; i++)
        {
            while (bucket[i])
            {
                A[flag] = i * i;
                flag++;
                bucket[i]--;
            }
        }
        return A;
    }
};