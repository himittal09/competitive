#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int depthLevel=0, valleyEnter=0;
    for(int i=0 ; i<s.length() ; i++) {
        if (s[i] == 'D') {
            depthLevel++;
        } else {
            depthLevel--;
            if (depthLevel == 0) {
                valleyEnter++;
            }
        }
    }
    cout << valleyEnter;
    return valleyEnter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
