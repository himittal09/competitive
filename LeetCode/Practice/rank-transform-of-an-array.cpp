#include <vector>
#include <map>
using namespace std;

// second approach: inplace
// find smallest element greater than current running rank, and update all smallest element

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // int elementRank=0;
        vector<int> sol(arr.size(), 0);
        map<int, int> myLookup;
        std::map<int, int>::const_iterator got;
        for (int i=0; i<arr.size(); i++)
        {
            got = myLookup.find(arr[i]);
            if (got != myLookup.end())
            {
                sol[i] = sol[got->second];
            }
            else
            {
                // elementRank = 1;
                for (int j=0; j<i; j++)
                {
                    // if (arr[i] > arr[j])
                    // {
                    //     // elementRank++;
                    // }
                    // else 
                    if (arr[i] < arr[j])
                    {
                        sol[j]++;
                    }
                }
                myLookup[arr[i]] = i;

                /**
                 * lower_bound() is also used for the search operation but sometimes also returns a valid key-value pair even if it is not present in map .
                 * lower_bound() returns address of key value pair, if one is present in map,
                 * else returns the address to the smallest key greater than key mentioned in its arguments.
                 * If all keys are smaller than the key to be found, it points to “map.end()” .
                */

                auto x = distance(myLookup.begin(), myLookup.lower_bound(arr[i]))+1;
                // elementRank = x;
                sol[i] = x;
            }
        }
        return sol;
    }
};