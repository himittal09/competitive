class Solution {
public:
    bool judgeCircle(string moves) {
        int hd=0, vd=0;
        for (auto ch: moves)
        {
            switch (ch) {
                case 'U' : vd++; break;
                case 'D' : vd--; break;
                case 'R' : hd++; break;
                case 'L' : hd--; break;
            }
        }
        return ((hd == 0) && (vd == 0));
    }
};