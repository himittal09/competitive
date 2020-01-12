#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        string n1, n2;
        int t1;
        while (n)
        {
            t1 = n % 10;
            n = n / 10;
            if (t1 < 2) {
                n--;
                t1 += 10; 
            }
            n1 = to_string(floor(t1 /2.0)) + n1;
            n2 = to_string(ceil(t1 /2.0)) + n2;
        }
        vector<int> nums = {stoi(n1), stoi(n2)};
        return nums;
    }
};
