#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string result, intermediate;
        stringstream check1(s);
        getline(check1, intermediate, ' '));
        reverse(intermediate.begin(), intermediate.end());
        result += intermediate;
        while(getline(check1, intermediate, ' ')) 
        {
            reverse(intermediate.begin(), intermediate.end());
            result += (" " + intermediate);
        }
        return result;
    }
};