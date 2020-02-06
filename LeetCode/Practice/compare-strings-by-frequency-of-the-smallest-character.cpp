#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int f (string q)
    {
        int arr[26] = {0};
        for (char ch: q)
        {
            arr[ch-'a']++;
        }
        for (int i=0; i<26; i++)
        {
            if (arr[i])
            {
                return arr[i];
            }
        }
        return 0;
    }

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> wordLength(12, 0);
        vector<int> result;
        for (string& word: words)
        {
            wordLength[f(word)]++;
        }
        for (int i = 9; i >= 0; i--)
        {
            wordLength[i] = wordLength[i] + wordLength[i+1];
        }
        for (string& str: queries)
        {
            result.push_back(wordLength[f(str) + 1]);
        }
        return result;
    }
};