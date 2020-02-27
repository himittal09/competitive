#include <sstream>

using namespace std;

class Solution {
    std::string trim(const std::string& str, const std::string& whitespace = " \t")
    {
        const auto strBegin = str.find_first_not_of(whitespace);
        if (strBegin == std::string::npos)
        {
            return "";
        }
        const auto strEnd = str.find_last_not_of(whitespace);
        const auto strRange = strEnd - strBegin + 1;
        return str.substr(strBegin, strRange);
    }
public:
    string reverseWords(string s) {
        s = trim(s);
        string word;
        stringstream ss(s);
        ss >> word;
        string sol {word};
        while (ss >> word)
        {
            sol = (word + " " + sol);
        }
        return sol;
    }
};