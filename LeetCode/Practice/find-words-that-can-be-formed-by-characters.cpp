#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> bucket(26);
        vector<int> temp;
        int tl = 0;
        bool formable;
        for (char ch: chars)
        {
            bucket[ch - 'a']++;
        }
        for (string& word: words)
        {
            temp = bucket;
            formable = true;
            for (char ch: word)
            {
                temp[ch - 'a']--;
            }
            for (int i=0; formable && i<26; i++)
            {
                formable = temp[i] >= 0;
            }
            if (formable)
            {
                tl += word.length();
            }
        }
        return tl;
    }
};