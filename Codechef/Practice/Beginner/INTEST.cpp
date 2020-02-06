#include<iostream>
using namespace std;

int main () {

    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    long unsigned int n, k, temp, divisibles;
    cin >> n >> k;

    while(n--) {
        cin >> temp;
        if (temp % k == 0) {
            divisibles++;
        }
    }

    cout << divisibles;

    return 0;
}