#include <iostream>
#include <ios>
using namespace std;

bool equalOccurences (string& str)
{
    int counter[26] = {0};
    int sum=0, maxC=0;
    for (char& ch: str)
    {
        counter[ch-'a']++;
    }
    for (int i=0; i<26; i++)
    {
        sum += counter[i];
        maxC = max(maxC, counter[i]);
    }
    return (maxC*2 == sum);
}

int main ()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> str;
        if (equalOccurences(str))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    return 0;
}