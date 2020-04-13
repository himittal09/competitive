#include <iostream>

using namespace std;

unsigned int countBits (int x)
{
    x = x - ((x >> 1) & 0x55555555);
    x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
    x = x + (x >> 4);
    x &= 0xF0F0F0F;
    return (x * 0x01010101) >> 24;
}

int main ()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int t, n, q, num, oc {0}, ec {0};
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        oc = 0;
        ec = 0;
        while (n--)
        {
            cin >> num;
            if (countBits(num) & 1)
            {
                oc++;
            }
            else
            {
                ec++;
            }
        }
        while (q--)
        {
            cin >> num;
            if (countBits(num) & 1)
            {
                cout << ec << " " << oc << "\n";
            }
            else
            {
                cout << oc << " " << ec << "\n";
            }
        }
    }
    return 0;
}