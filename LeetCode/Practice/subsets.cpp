#include <vector>
#include <bitset>
using namespace std;

class Solution {
    vector<vector<int>> sol;

    void rec (vector<int>& res, int index, vector<int> toAppend)
    {
        if (index == res.size())
        {
            sol.push_back(toAppend);
            return;
        }
        rec(sol, res, index+1, toAppend);
        toAppend.push_back(res[index]);
        rec(sol, res, index+1, toAppend);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        rec(nums, 0, {});
        return this->sol;
    }
};


auto speedup = [](){
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    return 0;
}();