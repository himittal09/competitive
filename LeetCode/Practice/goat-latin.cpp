#include <iostream>
#include <cstring>

using namespace std;

class Solution {
public:
    bool isVowel (char ch)
    {
        return !(!strchr("aeiouAEIOU", (int)ch));
    }

    string toGoatLatin(string S) {
        string aaCount = string("a");
        string result;
        string word;

        stringstream str(S);

        while (getline(str, word, ' '))
        {
            if (!isVowel(word[0]))
            {
                char ch = word[0];
                word.erase(0, 1);
                word += ch;
            }
            word += (string("ma") + aaCount);
            aaCount += "a";
            result += (word + " ");
        }
        result.erase(result.length()-1);
        return result;
    }
};