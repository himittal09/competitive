#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& A) {
        unordered_set<int> sol, cur, temp;
        for (int i: A) {
            temp.insert(i);
            for (int j: cur)
            {
                temp.insert(i|j);
            }
            cur = temp;
            for (int val: cur)
            {
                sol.insert(val);
            }
        }
        return sol.size();
    }
};

static auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();