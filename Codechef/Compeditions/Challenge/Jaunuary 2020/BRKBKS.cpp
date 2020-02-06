#include <iostream>
#include <ios>
using namespace std;

std::ios::sync_with_stdio(false);

int main ()
{
    int t, s, w1, w2, w3;
    cin >> t;
    while (t--)
    {
        cin >> s >> w1 >> w2 >> w3;
        if (w1 + w2 + w3 <= s)
        {
            cout << "1\n";
        }
        else
        {
            if (w1 + w2 <= s)
            {
                cout << "2\n";
            }
            else if (w2 + w3 <= s)
            {
                cout << "2\n";
            }
            else
            {
                cout << "3\n";
            }
        }
    }
    return 0;
}