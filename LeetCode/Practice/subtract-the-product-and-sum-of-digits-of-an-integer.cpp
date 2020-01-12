#include <iostream>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, product=1, temp=0;
        while (n)
        {
            temp = n % 10;
            sum += temp;
            product *= temp;
            n /= 10;
        }
        return product-sum;
    }
};