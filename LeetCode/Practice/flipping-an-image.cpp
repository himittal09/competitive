#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int temp;
        for (vector<int>& row: A)
        {
            temp = row.size();
            for (int i=0; i<temp >> 1; i++)
            {
                swap(row[i], row[temp-1-i]);
                row[i] = !row[i];
                row[temp-1-i] = !row[temp-1-i];
            }
            if (temp & 1)
            {
                row[temp >> 1] = !row[temp >> 1];
            }
        }
        return A;
    }
};