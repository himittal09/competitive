#include <bits/stdc++.h>

using namespace std;

string strip_spaces (string str) {
    string newStr;
    for (int i=0 ; i<str.length() ; i++) {
        if (str[i] != ' ') {
            newStr.push_back(str[i]);
        }
    }
    return newStr;
}

// Complete the encryption function below.
string encryption(string s) {
    const string newStr = strip_spaces(s);
    const int strLen = newStr.length();
    int colLen = ceil(sqrt((float)strLen)), rowLen = floor(sqrt((float)strLen));
    string finalStr;
    // col = 4, row = 3
    if (rowLen * colLen < strLen) {
        rowLen++;
    }
    for (int i=0 ; i<colLen ; i++) {
        for (int j=i ; j<strLen ; j+= colLen) {
            finalStr.push_back(newStr[j]);
        }
        finalStr.push_back(' ');
    }
    cout << finalStr;
    return finalStr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
