#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) {
    if (n/2 >= p) {
        return p/2;
    } else {
        return n/2 - p/2;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
