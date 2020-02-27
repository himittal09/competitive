class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool isOneCharacter = true;
        for (int i=0; i<bits.size(); )
        {
            if (bits[i] == 1)
            {
                i += 2;
                isOneCharacter = false;
            }
            else
            {
                i += 1;
                isOneCharacter = true;
            }            
        }
        return isOneCharacter;
    }
};