#include <iostream>
#include <ios>
#include <cmath>
using namespace std;

int main ()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, minAmt, num;
    cin >> t;
    while (t--)
    {
        cin >> n;
        minAmt = 0;
        while (n--)
        {
            cin >> num;
            minAmt = min(minAmt, num);
        }
        cout << minAmt;
    }
    return 0;
}