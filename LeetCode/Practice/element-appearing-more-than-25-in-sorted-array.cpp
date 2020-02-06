class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int cof=0, mof=0, con=0, mon=0;
        for (auto num: arr)
        {
            if (num == con)
            {
                cof++;
            }
            else
            {
                if (mof < cof)
                {
                    mof = cof;
                    mon = con;
                }
                con = num;
                cof = 1;
            }
        }
        if (mof < cof)
        {
            mof = cof;
            mon = con;
        }
        return mon;
    }
};