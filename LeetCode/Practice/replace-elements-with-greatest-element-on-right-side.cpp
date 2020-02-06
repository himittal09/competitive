#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> soln(arr.size());
        int maxElem = -1;
        for (int i=arr.size()-1; i >= 0; i--)
        {
            soln[i] = maxElem;
            if (maxElem < arr[i])
            {
                maxElem = arr[i];
            }
        }
        return soln;
    }
};