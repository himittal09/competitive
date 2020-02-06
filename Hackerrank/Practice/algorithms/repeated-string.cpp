#include <bits/stdc++.h>
using namespace std;

long long repeatedString(string s, long n) {

    long long aCountInTotal=0, aCountTillMod=0;
    long long mod = n % s.size();
    for (long long i=0; i<s.size(); i++) {
        if (s[i] == 'a') {
            aCountInTotal++;
            if (i < mod) {
                aCountTillMod++;
            }
        }
    }
    return n / s.size() * aCountInTotal + aCountTillMod;    
}

int main () {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
