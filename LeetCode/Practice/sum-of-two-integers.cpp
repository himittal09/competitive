class Solution {
public:
    int getSum(int a, int b) {
        unsigned int carry;
        unsigned int c=a;
        unsigned int d=b;
        while (d)
        {
            carry = c & d;
            c = c ^ d;
            d = carry << 1;
        }
        return c;
    }
};