#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main ()
{
    map <string, int> mymap;
    map <string, int>::iterator itr;    
    int t, qt, qval;
    string qstr;
    cin >> t;
    while (t--)
    {
        cin >> qt;
        if (qt == 1)
        {
            cin >> qstr >> qval;
            mymap[qstr] += qval;
        }
        else if (qt == 2)
        {
            cin >> qstr;
            mymap.erase(qstr);
        }
        else
        {
            cin >> qstr;
            itr = mymap.find(qstr);
            if (itr != mymap.end())
            {
                cout << itr->second << "\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        
    }
    return 0;
}