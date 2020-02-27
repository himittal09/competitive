#include <algorithm>

using namespace std;

class Solution {
public:
    bool canTransform(string start, string end) {        
        int s1T {0}, s2T {0};
        while (s1T < start.length() && s2T < end.length())
        {
            while (end[s2T] == 'X')
            {
                s2T++;
            }
            while (start[s1T] == 'X')
            {
                s1T++;
            }
            if (start[s1T] != end[s2T])
            {
                return false;
            }
            else if (s1T == s2T)
            {
                s1T++;
                s2T++;
            }
            else
            {
                if (start[s1T] == 'R' && s1T > s2T)
                {
                    return false;
                }
                if (start[s1T] == 'L' && s1T < s2T)
                {
                    return false;
                }
                s1T++;
                s2T++;
                // L can move left
                // R can move right
                // both are equal, infer their type and hence, movement heads
            }
        }
        return true;
    }
};

auto speedup = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    return 0;
}();