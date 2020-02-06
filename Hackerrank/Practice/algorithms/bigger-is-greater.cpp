#include <bits/stdc++.h>

using namespace std;

void swap_char (char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// Complete the biggerIsGreater function below.
string biggerIsGreater(string w) {
    int i;
    for (i=w.length()-1; i>0 && w[i] >= w[i-1]; i--);
    if (i==0) {
        return "no answer";
    }
    int pivot = i;
    int smallestIndex=i;
    for (int j=i; j<w.length(); j++) {
        if (w[j] > w[i-1] && w[j] < w[smallestIndex]) {
            smallestIndex = j;
        }
    }
    swap_char (&w[smallestIndex], &w[i-1]);
    // from i to length(), reverse the remaining string
    reverse(w.begin()+i, w.end()-1);
    return w;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
