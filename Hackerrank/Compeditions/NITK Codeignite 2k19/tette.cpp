#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int mmin (int n1, int n2) {
    return n1 < n2 ? n1 : n2;
}

int main() {
    int t, tc[100000][2], tt[100000][2], chosenTrack, temp, dist, ttCount;
    cin >> t;
    while (t--) {
        cin >> ttCount;
        for (int i=0; i<ttCount; i++) {
            cin >> tc[i][0];
        }
        for (int i=0; i<ttCount; i++) {
            cin >> tc[i][1];
        }
        for (int i=1; i<ttCount; i++) {
            cin >> tt[i][0];
        }
        for (int i=1; i<ttCount; i++) {
            cin >> tt[i][1];
        }
        chosenTrack = tc[0][0] < tc[0][1] ? 0 : 1;
        dist = tc[0][chosenTrack];
        for (int i=1; i<ttCount; i++) {
            if (mmin(tc[i][chosenTrack], tt[i][chosenTrack] + tc[i][!chosenTrack]) == tc[i][chosenTrack]) {
                dist += tc[i][chosenTrack];
            } else {
                dist += tt[i][chosenTrack];
                chosenTrack = !chosenTrack;
                dist += tc[i][chosenTrack];
            }
        }
        cout << dist;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
