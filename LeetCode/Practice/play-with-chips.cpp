class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int oc = 0, ec = 0;
        for (int chip: chips)
        {
            oc += chip & 1;
            ec += !(chip & 1);
        }
        return min(oc, ec);
    }
};