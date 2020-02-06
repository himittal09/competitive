#include <iostream>
#include <cstring>

using namespace std;

class Solution {
public:
    bool isLetter (char ch)
    {
        return ((ch >='a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
    }
    string reverseOnlyLetters(string S) {
        int first=0, last=S.length()-1;
        while (first < last)
        {
            while (!isLetter(S[first]))
            {
                first++;
            }
            while (!isLetter(S[last]))
            {
                last--;
            }
            if (first < last)
            {
                swap(S[first], S[last]);
                first++;
                last--;
            }
        }
        return S;
    }
};