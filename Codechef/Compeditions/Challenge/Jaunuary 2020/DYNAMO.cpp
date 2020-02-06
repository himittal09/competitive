#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    short int t, n, result;
    cin >> t;
    unsigned long long s, a, b, c, d, e, temp;
    while (t--)
    {
        cin >> n;
        temp = pow((unsigned long long)10, (unsigned long long)n);
        cin >> a;
        s = a + 2 * temp;
        cout << s;
        fflush(stdout);
        cin >> b;
        c = temp - b;
        cout << c;
        fflush(stdout);
        cin >> d;
        e = temp - d;
        cout << e;
        fflush(stdout);
        cin >> result;
        if (result == -1)
        {
            exit(0);
        }
    }
    return 0;
}