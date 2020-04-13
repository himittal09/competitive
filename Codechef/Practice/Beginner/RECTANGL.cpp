#include <iostream>
#include <unordered_map>

using namespace std;

int main ()
{
    int t, a;
    cin >> t;
    unordered_map <int, int> myMap;
    while (t--)
    {
        for(int i=0; i<4; i++)
        {
            cin >> a;
            myMap[a]++;
        }
        for (const auto& val: myMap)
        {
            if (val.second & 1)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
        myMap.clear();
    }

    return 0;
}