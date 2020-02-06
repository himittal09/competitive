#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int> > minimumAbsDifference(vector<int>& arr) {
        vector<vector<int> > soln;
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX, temp;
        for (int i=0; i<arr.size()-1; i++)
        {
            temp = arr[i+1] - arr[i];
            minDiff = min(temp, minDiff);
        }
        for (int i=0; i<arr.size()-1; i++)
        {
            temp = arr[i+1] - arr[i];
            if (temp == minDiff)
            {
                soln.push_back({arr[i], arr[i+1]});
            }
        }
        return soln;
    }
};

int main ()
{
    Solution obj;
    return 0;
}