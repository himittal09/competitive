#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec;
    int n, temp, x, a, b;
    cin >> n;
    while(n--) {
        cin >> temp;
        vec.push_back(temp);
    }
    cin >> x >> a >> b;
    vec.erase(vec.begin() + x-1);
    vec.erase(vec.begin()+a-1,vec.begin()+b-1);
    cout << vec.size() << endl;
    for (auto val: vec) {
        cout << val << " ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
