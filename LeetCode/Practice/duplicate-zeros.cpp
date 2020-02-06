#include <vector>

using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        const size_t originalSize = arr.size();
        for (int i=0; i<arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                // push one zero to ith index
                arr.insert(arr.begin()+i, 1, 0);
                i++;
            }
        }
        arr.resize(originalSize);
    }
};