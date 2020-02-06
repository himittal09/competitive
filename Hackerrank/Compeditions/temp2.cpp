#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main() {
    set<pair<int, int>> s;
    long int n, k, temp, temp2;
    cin >> n >> k;
    vector<pair<int, int>> herop;
    for (int i=0; i<n; i++) {
        cin >> temp;
        herop.push_back(make_pair(temp, 0));
    }
    for (int i=0; i<k; i++) {
        cin >> temp >> temp2;
        s.insert(make_pair(temp, temp2)); 
    }
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (s.find(make_pair(i+1, j+1)) == s.end() || s.find(make_pair(j+1, i+1)) == s.end()){
                if (herop[i].first > herop[j].first) {
                    herop[i].second++;
                } else if (herop[i].first < herop[j].first) {
                    herop[j].second++;
                }
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout << herop[i].second << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
