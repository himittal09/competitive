#include <iostream>
#include <ios>
using namespace std;

int main ()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long int t, l, r, xorSum=0, XorHist, incr;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        XorHist = l;
        xorSum = 0;
        incr = 1;
        for (int i=l; i<r && XorHist; i++)
        {
            XorHist = XorHist & i;
            xorSum = (((xorSum % 1000000007) + (XorHist % 1000000007)) % 1000000007);
        }
        cout << xorSum;
    }
    return 0;
}