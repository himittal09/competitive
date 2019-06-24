#include<algorithm>
#include<iostream>
using namespace std;

unsigned int palindrome (unsigned int num) {
    unsigned int rev=0;
    while (num) {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    return rev;
}

int main () {
    int t;
    unsigned int num;
    cin >> t;
    while (t--) {
        cin >> num;
        cout << palindrome(num) << endl;
    }
}