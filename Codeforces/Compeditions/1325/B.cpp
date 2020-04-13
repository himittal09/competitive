#include <unordered_set>
#include <vector>
#include <iostream>

using namespace std;

int main ()
{
    int t, n, num;
    cin >> t;
    unordered_set <int> mySet;

    while (t--)
    {
        cin >> n;
        while (n--)
        {
            cin >> num;
            mySet.insert(num);
        }
        cout << mySet.size() << "\n";
        mySet.clear();
    }
    return 0;
}