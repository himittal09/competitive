// work with indexes
// no matter what, we need to store hash of every unique string
// unordered_map(string, vector<int>)
// string is the hash of the string coverted into string from vector<int>
// vector<int> stores the index of each anagram

#include <unordered_map>
#include <vector>

using namespace std;

class Hasher {
public:
    size_t operator() (const string& key) const {
        size_t hash = 0;
        vector<int> bucket(26, 0);
        for (auto& ch: key)
        {
            bucket[ch-'a']++;
        }
        for (int i=0; i<26; i++)
        {
            int mask = (1 << i) * bucket[i];
            hash ^= (mask);
        }
        // for (auto& val: bucket)
        // {
        //     hash ^= (1 << (val % sizeof(size_t)));
        // }
        // std::ostringstream oss;
        // std::copy(bucket.begin(), bucket.end(), std::ostream_iterator<int>(oss, ","));
        // string hashGenerator = oss.str();
        // std::hash<string> hashObject;
        // size_t hash = hashObject(hashGenerator);
        return hash;
    }
};

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sol;
        unordered_map<string, vector<string>, Hasher> myMap;
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