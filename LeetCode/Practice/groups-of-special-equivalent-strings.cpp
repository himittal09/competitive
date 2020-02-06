#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string specialSort (string& str)
    {
        string odd;
        string even;

        for (int i=0;i<str.length(); i++)
        {
            if (i & 1)
            {
                odd += str[i];
            }
            else
            {
                even += str[i];
            }
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());

        return odd + even;
    }

    int numSpecialEquivGroups(vector<string>& A) {
        unordered_set<string> mymap;
        for (string& str: A)
        {
            mymap.insert(specialSort(str));
        }
        return mymap.size();
    }
};