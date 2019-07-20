#include <bits/stdc++.h>
#include <string>
using namespace std;

string timeConversion(string s) {
    char *pch;
    bool isEvening = s[8] == 'P';
    int time;
    pch = strtok (s,":");
    
    while (pch != NULL) {
        printf ("%s\n",pch);
        try {
            time = stoi(pch);
        } catch(const std::exception& e) { }
        
        pch = strtok (NULL, ":");
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    int hour, min;
    string secs;
    // string s;
    scanf("%d:%d:%s", &hour, &min, &secs);
    // getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
