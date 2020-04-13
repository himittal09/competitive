class Solution {
public:
    string convertToBase7(int num) {
        if (!num)
        {
            return "0";
        }
        string sol;
        int rem {0}, numcpy {num};
        while (num)
        {
            rem = num % 7;
            sol = (char)(abs(rem) + '0') + sol;
            num /= 7;
        }
        if (numcpy < 0)
        {
            sol = string("-") + sol;
        }
        return sol;
    }
};