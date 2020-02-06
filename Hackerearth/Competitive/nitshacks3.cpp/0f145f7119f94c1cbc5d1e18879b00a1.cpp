#include <iostream>
#include <ios>
#include <unordered_set>

using namespace std;

int main ()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, temp;
    char ch;
    string str;
    unordered_set <string> myset;
    cin >> n >> q;
    while (n--)
    {
        cin.ignore(20, ' ');
        cin >> str;
        myset.insert(str);
    }
    cin.ignore(20, ' ');
    cin >> str;
    while (q--)
    {
        cin >> temp;
        if (temp == 1 || temp == 2)
        {
            cin >> ch;
            if (temp == 1)
            {
                str = ch + str;
            }
            else
            {
                str += ch;
            }    
        }
        else if (temp == 3)
        {
            str.erase(0, 1);
        }
        else if (temp == 4)
        {
            str.erase(str.length()-1);
        }
        else if (myset.find(str) == myset.end())
        {
            cout << "no\n";
        }
        else
        {
            cout << "yes\n";
        }
    }
}