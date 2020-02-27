#include <vector>

using namespace std;

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        for (int i=1; i<arr.size(); i++)
        {
            arr[i] = arr[i] ^ arr[i-1];
        }
        vector<int> sol(queries.size(), 0);
        for (int i=0; i<queries.size(); i++)
        {
            if (queries[i][0] == 0)
            {
                sol[i] = arr[queries[i][1]];
            }
            else
            {
                sol[i] = (arr[queries[i][1]] ^ arr[queries[i][0]-1]);
            }
        }
        return sol;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();