#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
    using pos = std::pair<int, int>;

    bool query (pos loc, int size, vector<vector<int>>& matrix, unordered_set<std::pair<pos, int>>& mySet)
    {
        if (size == 1)
        {
            mySet.insert(make_pair(loc, size));
            return matrix[loc.first][loc.second];
        }
        else if (mySet.find(make_pair(loc, size)) != mySet.end())
        {
            return true;
        }
        bool q1 = query(make_pair(loc.first, loc.second), size-1, matrix, mySet);
        bool q2 = query(make_pair(loc.first+1, loc.second), size-1, matrix, mySet);
        bool q3 = query(make_pair(loc.first, loc.second+1), size-1, matrix, mySet);
        bool q4 = query(make_pair(loc.first+1, loc.second+1), size-1, matrix, mySet);
        if (q1 && q2 && q3 && q4)
        {
            mySet.insert(make_pair(loc, size));
            return true;
        }
        return false;
    }
public:
    int countSquares(vector<vector<int>>& matrix) {
        const int m = matrix.size(), n = matrix[0].size();
        int minAmount = min(m, n);
        unordered_set<std::pair<pos, int>> mySet;
        for (int i=0; i<m-minAmount; i++)
        {
            for (int j=0; j<n-minAmount; j++)
            {
                query(make_pair(i, j), minAmount, matrix, mySet);
            }
        }
        return mySet.size();
    }
};