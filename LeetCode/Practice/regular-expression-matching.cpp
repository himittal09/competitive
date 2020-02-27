class Solution {
public:
    bool isMatch(string s, string p) {
        int s1Runner {0}, scanner {0};
        while (scanner < p.length())
        {
            // check for wildcard support first
            if ((scanner + 1) < p.length() && p[scanner + 1] == '*')
            {
                if (p[scanner] == '.')
                {
                    return true;
                }
                else
                {
                    while (p[scanner] == s[s1Runner])
                    {
                        s1Runner++;
                    }
                }
                scanner += 2;    
            }
            else if (p[scanner] == '.')
            {
                s1Runner++;
                scanner++;
            }
            else if (p[scanner] == s[s1Runner])
            {
                s1Runner++;
                scanner++;
            }
            else
            {
                return false;
            }
        }
        return (s1Runner == s.length());
    }
};