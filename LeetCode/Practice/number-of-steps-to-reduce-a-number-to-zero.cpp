class Solution {
public:
    int numberOfSteps (int num) {
        int count=0;
        while (num)
        {
            count += ((num & 1) ? 2 : 1);
            num >>=1;
        }
        return count-1;
    }
};