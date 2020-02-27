#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        vector<vector<int>> sol(R*C, vector<int>(2, 0));
        int mch{1}, mcv{1}, counter {0};
        sol.push_back({ r0, c0 });
        // make jump statements
        while (counter < (R * C))
        {            
            // move horizontally
            for (int i=1; i<=mch; i++)
            {
                c0 += ((mch & 1) ? 1 : -1);
                if (r0 >= 0 && c0 >= 0 && r0 < R && c0 < C)
                {
                    sol[counter][0] = r0;
                    col[counter][1] = c0;
                    counter++;
                }
            }
            mch++;

            // move vertically
            for (int i=1; i<=mcv; i++)
            {
                r0 += ((mcv & 1) ? 1 : -1);
                if (r0 >= 0 && c0 >= 0 && r0 < R && c0 < C)
                {
                    sol[counter][0] = r0;
                    col[counter][1] = c0;
                    counter++;
                }
            }
            mcv++;
        }
        return sol;
    }
};