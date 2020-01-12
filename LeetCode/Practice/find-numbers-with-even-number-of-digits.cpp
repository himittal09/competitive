class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counter=0;
        for (auto num: nums)
        {
            if ((numberlength(num)) & 1 == 0)
            {
                counter++;
            }
        }
        return counter;
    }

    private: unsigned int numberlength (int& num)
    {
        unsigned int counter=0;
        while (num)
        {
            counter++;
            num /= 10;
        }
        return counter;
    }
};