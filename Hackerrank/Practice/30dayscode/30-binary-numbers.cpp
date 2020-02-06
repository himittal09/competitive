#include<bitset>
#include<iostream>
using namespace std;

int main () {
    int n, consone=0, temp=0;
    cin >> n;
    string binary = bitset<32>(n).to_string();
    for (int i=0 ; i<binary.length() ; i++) {
        if (binary[i]=='1') {
            temp++;
            if (temp > consone) {
                consone = temp;
            }
        } else {
            temp=0;
        }
    }
    cout << consone;
}