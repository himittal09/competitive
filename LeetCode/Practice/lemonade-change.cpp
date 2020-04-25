class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int bill5 {0}, bill10 {0};
        for (int bill: bills)
        {
            if (bill == 5)
            {
                bill5++;
            }
            else if (bill == 10)
            {
                if (!bill5)
                {
                    return false;
                }
                bill5--;
                bill10++;
            }
            else
            {
                if (bill5 && bill10)
                {
                    bill5--;
                    bill10--;
                }
                else if (bill5 < 3)
                {
                    return false;
                }
                else
                {
                    bill5 -= 3;
                }
            }
        }
        return true;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();