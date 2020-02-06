#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> mymap;
        for (string word: words)
        {
            string str;
            for (char ch: word)
            {
                str = str + morse[ch - 'a'];
            }
            mymap.insert(str);
        }
        return mymap.size();
    }
};