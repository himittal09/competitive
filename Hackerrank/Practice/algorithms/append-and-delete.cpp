#include <bits/stdc++.h>
#include <math.h>
using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
    int len=0;
    for (; len < s.size() ; len++) {
        if (s[len] != t[len]) {
            break;
        }
    }
    int popop = s.size() - len;
    int addop = t.size() - len;
    if ((s.size() - t.size()) & 1 && !(k&1)) {
        return "No";
    }
    if (popop + addop <= k) {
        return "Yes";
    } else {
        return "No";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
