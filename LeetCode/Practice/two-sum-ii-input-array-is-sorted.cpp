#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map <int, int> myMap;
        unordered_map <int, int>::iterator itr;
        for (int i=0; i<numbers.size(); i++)
        {
            itr = myMap.find(target-numbers[i]);
            if (itr != myMap.end())
            {
                return { itr->second+1, i+1 };
            }
            else
            {
                myMap[numbers[i]] = i;
            }
        }
        return {0, 0};
    }
};