#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
int anagram(string s) {
    if (s.length() & 1)
    {
        return -1;
    }
    int bucket[26] = {0};
    int counter=0;
    for (int i=0; i<(s.size() / 2); i++)
    {
        bucket[s[i]-'a']++;
    }
    for (int i=(s.size()/2); i<s.size();i++)
    {
        bucket[s[i]-'a']--;
    }
    for (int i=0; i<26; i++)
    {
        if (bucket[i] > 0)
        {
            counter += bucket[i];
        }
    }
    return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
