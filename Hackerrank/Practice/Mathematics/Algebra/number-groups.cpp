#include <bits/stdc++.h>

using namespace std;

// Complete the sumOfGroup function below.
long sumOfGroup(long k) {
    const long skipCount = (k-1) * k + 1;
    return (2*skipCount+2*k-2)*k/2;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long answer = sumOfGroup(k);

    fout << answer << "\n";

    fout.close();

    return 0;
}
