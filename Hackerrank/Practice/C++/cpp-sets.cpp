#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main ()
{
    set <int> myset;
    int t, qt, qv;
    cin >> t;
    while (t--)
    {
        cin >> qt >> qv;
        if (qt == 1)
        {
            myset.insert(qv);
        }
        else if (qt == 2)
        {
            myset.erase(qv);
        }
        else
        {
            if (myset.find(qv) != myset.end())
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        
    }
    return 0;
}