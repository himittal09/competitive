#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int, vector<int>> mymap;
        int counter=0;
        for (int i=0; i<mat.size(); i++)
        {
            counter=0;
            for (int j=0; j<mat[i].size() && mat[i][j]; j++)
            {
                counter++;
            }
            mymap[counter].push_back(i);
        }
        vector<int> sol;
        for (auto it = mymap.begin(); it != mymap.end() && sol.size() < k; it++)
        {
            for (int i=0; i< it->second.size() && sol.size() < k; i++)
            {
                sol.push_back(it->second[i]);
            }
        }
        return sol;
    }
};