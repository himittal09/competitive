class Solution {
public:
    string toHex(int num) {
        if (num == 0)
        {
            return "0";
        }
        unsigned int n = num;
        const string mymap = "0123456789abcdef";
        string sol;
        while (n)
        {
            sol = mymap[n & 0xf] + sol;
            n >>= 4;
        }
        return sol;
    }
};