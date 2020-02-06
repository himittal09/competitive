#include<iostream>
using namespace std;

int main () {

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);

    int t, oddSols = 0, evenSols = 0, sol;
    cin >> t;
    while (t--) {
        cin >> sol;
        if (sol % 2 == 0) {
            evenSols++;
        } else {
            oddSols++;
        }
    }
    if (evenSols > oddSols) {
        cout << "READY FOR BATTLE\n";
    } else {
        cout << "NOT READY\n";
    }
    return 0;
}