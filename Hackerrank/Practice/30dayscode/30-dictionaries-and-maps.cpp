#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {

    map<string, int> dict;
    int n, number;
    string name;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        cin >> name >> number;
        dict.insert(pair<string, int>(name, number));
    }

    // querying starts here
    while (cin >> name) {
        try {
            number = dict.at(name);
            cout << name << "=" << number << endl;
        } catch (...) {
            cout << "Not found\n";
        }
    }

    return 0;
}
