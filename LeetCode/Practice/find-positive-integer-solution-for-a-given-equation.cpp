/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

#include <iostream>
#include <vector>
using namespace std;

class CustomFunction {
public:
    // Returns f(x, y) for any given positive integers x and y.
    // Note that f(x, y) is increasing with respect to both x and y.
    // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
    int f(int x, int y);
};

class Solution {
public:
    vector<vector<int> > findSolution(CustomFunction& customfunction, int z) {
        int sol, low, mid, high;
        vector<vector<int> > solution;
        for (int i=1; i<1001; i++)   
        {
            low = 1; high = 1001; mid = 500;
            while (low < high)
            {
                sol = customfunction.f(i, mid);
                if (sol == z)
                {
                    solution.push_back({i, mid});
                    break;
                }
                else if (sol < mid)
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
                mid = (low + high) >> 1;
            }
        }
        return solution;
    }
};