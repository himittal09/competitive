#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long long repeatedString(string s, long long n) {
    long long aCountInTotal=0, aCountTillMod=0;
    const long long mod = n % s.size();
    for (long long i=0; i<s.size(); i++) {
        if (s[i] == 'a') {
            aCountInTotal++;
            if (i <= mod) {
                aCountTillMod++;
            }
            // ((n/s.size()) * count(s.begin(),s.end(),'a')) + 
        // count(s.begin(),s.begin() + n%s.size(),'a')
        }
    }
    if (mod != 0) {
        return (n/s.length()) * aCountInTotal + aCountTillMod;
    } else {
        return (n/s.length()) * aCountInTotal;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
