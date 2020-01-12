#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int num = 0;
        for (int n : A)
        {
            num ^= n;
        }
        return num;
    }
};

int main ()
{
    Solution obj;
    vector<int> vec {{2, 1, 2, 5, 3, 2}};
    cout << obj.repeatedNTimes(vec);
    return 0;
}