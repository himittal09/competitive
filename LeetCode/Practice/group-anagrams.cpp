#include <unordered_map>
#include <vector>
#include <iostream>

using namespace std;

struct myhash
{
    std::size_t operator()(const string& str) const
    {
        std::size_t seed = 0;
        int arr[26] = {0};
        for (const auto ch: str)
        {
            arr[ch - 'a']++;
        }
        for (int i=0; i<26; i++)
        {
            seed ^= arr[i] + 0x9e3779b9 + (seed<<6) + (seed>>2);
        }
        return seed;
    }
};

struct my_equal_to {
    constexpr bool operator()(const string& _Left, const string& _Right) const {
        if (_Left.length() != _Right.length())
        {
            return false;
        }
        int arr[26] = {0};
        for (const auto ch: _Left)
        {
            arr[ch - 'a']++;
        }
        for (const auto ch: _Right)
        {
            arr[ch - 'a']--;
        }
        for (int i=0; i<26; i++)
        {
            if (arr[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sol;
        unordered_map<string, vector<string>, myhash, my_equal_to> myMap;
        for (const auto& str: strs)
        {   
            myMap[str].push_back(str);
        }
        for (auto& [key, value]: myMap)
        {
            sol.push_back(move(value));
        }
        return sol;
    }
};