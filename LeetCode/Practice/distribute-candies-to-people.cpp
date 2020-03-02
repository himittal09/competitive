#include <iostream>
#include <vector>

using namespace std;

class Solution {
    unsigned int mySqrt (const unsigned int num)
    {
        int i=1;
        while (i*i <= num) i++;
        return i-1;
    }

    inline unsigned int f (const unsigned int v)
    {
        return (v * (v+1)) >> 1;
    }

    unsigned int getCompleteRow (const unsigned int n)
    {
        unsigned int ansApprox = mySqrt(n << 1);
        while (f(ansApprox) > n)
        {
            ansApprox--;
        }
        return ansApprox;
    }
public:
    vector<int> distributeCandies(int candies, int num_people) {
        const unsigned int completeAbleRows {getCompleteRow((candies >> 1)/(num_people*(num_people+1)))};
        vector<int> sol (num_people, 0);
        int candyToGive {0};
        for (int i=0; i<num_people; i++)
        {
            sol[i] = (completeAbleRows);
        }
        return {};
    }
};

int main ()
{
    Solution obj;
    obj.distributeCandies(23, 3);
    return 0;
}