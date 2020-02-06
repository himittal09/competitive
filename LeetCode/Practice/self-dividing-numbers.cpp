#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isSelfDividingNumber (int num)
    {
        int numc = num, temp;
        while (num)
        {
            temp = num % 10;
            if ((temp == 0) || ((numc % temp) != 0))
            {
                return false;
            }
            num = num / 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> solution;
        for (int i=left; i <= right; i++)
        {
            if (isSelfDividingNumber(i))
            {
                solution.push_back(i);
            }
        }
        return solution;
    }
};

int main ()
{
    Solution obj;
    vector<int> vec = obj.selfDividingNumbers(1, 22);
    for (int val: vec)
    {
        cout << val << " ";
    }
    return 0;
}