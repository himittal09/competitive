#include <iostream>
#include <cstring>
using namespace std;

bool isVowel (char ch)
{
    return !(!strchr("aeiou", ch));
}

int main ()
{
    string str;
    cin >> str;
    if (!isVowel(str[0]) && !isVowel(str[str.length()-1]))
    {
        cout << "no\n";
        return 0;
    }
    int vc=0, cc=0;
    for (char ch: str)
    {
        if (isVowel(ch))
        {
            vc++;
        }
        else
        {
            cc++;
        }
    }
    if (vc > cc)
    {
        cout << "yes\n";
    }
    else
    {
        cout << "no\n";
    }
    
    return 0;
}