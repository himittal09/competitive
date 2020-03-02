class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
        {
            return false;
        }
        vector<int> bucket (26, 0);
        for (char ch: s)
        {
            bucket[ch-'a']++;
        }
        for (char ch: t)
        {
            bucket[ch-'a']--;
        }
        for (int i=0; i<26; i++)
        {
            if (bucket[i])
            {
                return false;
            }
        }
        return true;
    }
};