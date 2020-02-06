#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec;
    int n, temp;
    cin >> n;
    while(n--) {
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    for (auto val: vec) {
        cout << val << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
