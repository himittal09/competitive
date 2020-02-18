#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        first += (string(" ") + second + " ");
        
        int startPos, endPos;
        vector<string> sol;

        for (size_t pos = text.find(first, 0); pos != string::npos; pos = text.find(first,pos+1))
        {
            if (pos == 0 || text[pos-1] == ' ')
            {
                startPos = pos + first.length();
                endPos = text.find(" ", startPos);
                sol.push_back(text.substr(startPos, endPos-startPos));
            }
        }
        return sol;
    }
};

int main ()
{
    string text("alice is a good girl she is a good student");
    string first("a");
    string second ("good");
    Solution obj;
    auto result = obj.findOcurrences(text, first, second);
    for (auto val: result)
    {
        cout << val << " ";
    }
    return 0;
}