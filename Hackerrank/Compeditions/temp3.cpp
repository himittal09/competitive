#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long int n, d, t, temp, hitcount=0;
    cin >> n >> d >> t;
    vector<long> balls;
    for (int i=0; i<n; i++) {
        cin >> temp;
        balls.push_back(temp);
    }
    sort(balls.begin(), balls.end(), greater<int>());
    for (int i=0; i<t && d; i++) {
        temp=0;
        while (temp < n && balls[temp] > d) {
            temp++;
        }
        if (temp < n) {
            d -= balls[temp];
            balls[temp] >>= 1;
            sort(balls.begin(), balls.end(), greater<int>());
            hitcount++;
        } else {
            break;
        }
    }
    if (hitcount <= t && !d) {
        cout << hitcount;
    } else {
        cout << -1;
    }
    // by Pi if d>Pi else {0 and Pi becomes floor(Pi/2)}
    return 0;
}
