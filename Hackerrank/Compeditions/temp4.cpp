#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long double distance (int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1-x2, 2)+pow(y1-y2, 2));
}

int main() {
    int t;
    int n, m;
    cin >> t;
    while (t--) {
        int temp, temp2;
        cin >> n >> m;
        long double weight=0;
        vector<pair<int, int>> poles;
        for (int i=0; i<n; i++) {
            cin >> temp >> temp2;
            poles.push_back(make_pair(temp, temp2));
        }
        for (int i=0; i<m; i++) {
            long double mindist=0, anotemp=0;
            cin >> temp >> temp2;
            for (const pair<int,int> &value : poles) {
                anotemp = distance(temp, temp2, value.first, value.second);
                if (anotemp < mindist) {
                    mindist = anotemp;
                }
            }
            weight += mindist;
        }

        printf("%.6ld", weight);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}