#include <iostream>
#include <ios>

using namespace std;

unsigned int mySqrt (const unsigned int num)
{
    int i=1;
    while (i*i <= num) i++;
    return i-1;
}

unsigned int f (const unsigned int v)
{
    return v * (v+1) / 2;
}

unsigned int maxTriangle (unsigned int n)
{
    unsigned int ansApprox = mySqrt(n << 1);
    while (f(ansApprox) > n)
    {
        ansApprox--;
    }
    return ansApprox;
}

int main ()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << maxTriangle(n) << endl;
    }

    return 0;
}