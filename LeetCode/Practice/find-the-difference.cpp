class Solution {
public:
    char findTheDifference(string s, string t) {
        int sol {0};
        for (char ch: s)
        {
            sol ^= (int)ch;
        }
        for (char ch: t)
        {
            sol ^= (int)ch;
        }
        return (char)sol;
    }
};