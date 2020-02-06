#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
}

int main ()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, f, c, maxgcd, temp;
    cin >> t;
    while (t--)
    {
        cin >> n;
        maxgcd = 1;
        f = floor(n / 2.0);
        c = ceil(n / 2.0);
        while (f > 1)
        {
            temp = gcd(f, c);
            maxgcd = max(maxgcd, temp);
            f--;
            c++;
        }
        cout << maxgcd << endl;
    }
    return 0;
}