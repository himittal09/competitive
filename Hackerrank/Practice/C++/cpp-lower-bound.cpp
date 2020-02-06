#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec;
    int n, temp, q;
    cin >> n;
    while(n--) {
        cin >> temp;
        vec.push_back(temp);
    }
    cin >> q;
    while (q--) {
        cin >> temp;
        auto low = lower_bound(vec.begin(), vec.end(), temp) - vec.begin();
        if (vec[low] == temp)
            cout << "Yes " << low+1 << endl;
        else
            cout << "No " << low+1 << endl;
        // for (n=0; vec[n] < temp; n++);
        // if (vec[n] == temp) {
        //     cout << "Yes " << n+1 << endl;
        // } else {
        //     cout << "No " << n+1 << endl;
        // }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
