class Solution {    
public:
    // Boyer-Moore Majority Vote algorithm
    int majorityElement(vector<int>& nums) {
        int count = 0, me = -1;
        for(auto num : nums) {
            if (count == 0)
            {
                count++;
                me = num;
            }
            else if (num == me)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return me;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();