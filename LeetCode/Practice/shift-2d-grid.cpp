#include <vector>

using namespace std;

class Solution {
public:
    int gcd(int a, int b) 
    { 
        if (b == 0) 
            return a;
        else
            return gcd(b, a % b); 
    } 
    
    void leftRotate(vector<int> arr, int d, int n) 
    { 
        int g_c_d = gcd(d, n);
        for (int i = 0; i < g_c_d; i++) { 
            int temp = arr[i]; 
            int j = i;
            while (1) { 
                int k = j + d; 
                if (k >= n) 
                    k = k - n; 
    
                if (k == i) 
                    break; 
    
                arr[j] = arr[k]; 
                j = k; 
            } 
            arr[j] = temp; 
        } 
    }

    vector<vector<int> > shiftGrid(vector<vector<int> >& grid, int k) {
        const int row = grid.size(), col = grid[0].size();
        k = k % (row * col);
        int temp = k / col, temp2;
        vector<int> tempvec;
        while (temp--)
        {
            tempvec = grid[row-1];
            for (int i=row-1; i>0; i--)
            {
                grid[i] = grid[i-1];
            }
            grid[0] = tempvec;
        }

        temp = k % col;
        while (int i=0; i<temp; i++)
        {
            // remaining rotations
            // temp times right rotate == col-temp times left rotate
            for (vector<int>& vec: grid)
            {
                leftRotate(vec, col-temp, col);
            }
            // shift temp rows up once
        }
        return grid;
    }
};