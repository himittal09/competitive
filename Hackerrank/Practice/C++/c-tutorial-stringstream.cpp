#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> numvec;
    stringstream ss(str);
    char ch;
    int num;
    while(ss >> num) {
        numvec.push_back(num);
        ss >> ch;
    }
    return numvec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

