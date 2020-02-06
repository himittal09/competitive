#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
typedef pair<long long, long long> pairs;

long long getdistance (long long x1, long long y1, long long x2, long long y2) {
    return abs(x1-x2) + abs(y1-y2);
}

int main() {
    long long n, temp, temp2, distance=0;
    cin >> n;
    set<pairs> s;
    
    cin >> temp >> temp2;
    s.insert(make_pair(temp, temp2));
    
    for (long long i=0;i<n-1; i++) {
        cin >> temp >> temp2;
        for (auto const &x : s) { 
            distance += getdistance(temp, temp2, x.first, x.second);  
        } 
        s.insert(make_pair(temp, temp2)); 
    }
    cout << distance % 1000000007;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
