#include<iostream>
using namespace std;

int main () {

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);

    int t;
    register long unsigned int a, b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        if (a > b) {
            cout << '>' << endl;
        } else if (a < b) {
            cout << '<' << endl;
        } else {
            cout << '=' << endl;
        }
    }

    return 0;
}