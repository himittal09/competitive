#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

string timeConversion(int hour, int min, int secs, char timemed) {
    char str[20] = {0};
    if (timemed == 'P' && hour!=12) {
        hour += 12 ;
    }
    if (timemed != 'P' && hour==12) {
        hour = 0 ;
    }
    sprintf(str, "%02d:%02d:%02d", hour, min, secs);
    return str;
}

int main () {
    ofstream fout(getenv("OUTPUT_PATH"));
    int hour, min, secs;
    char timemed;
    scanf("%d:%d:%d%cM", &hour, &min, &secs, &timemed);

    string result = timeConversion(hour, min, secs, timemed);
    cout << result;

    fout << result << "\n";

    fout.close();

    return 0;
}
