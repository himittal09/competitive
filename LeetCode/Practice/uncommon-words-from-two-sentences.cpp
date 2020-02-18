#include <sstream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        vector<string> sol;
        unordered_map<string, int> myMap;
        stringstream stream;
        string word;
        stream << A << " " << B;
        while (getline(stream, word, ' '))
        {
            myMap[word]++;
        }
        for (const auto& [key, value] : myMap)
        {
            if (value == 1)
            {
                sol.push_back(key);
            }
        }
        return sol;
    }
};