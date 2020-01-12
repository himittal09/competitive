#include <iostream>
using namespace std;

#define N 1000000007

unsigned long long pow2 (int exp) {
    unsigned long long base = 2;
    unsigned long long t=1;
    while (exp > 0) {
        if (exp % 2 != 0) {
            t = (t * base) % N;
        }
        base = (base * base) % N;
        exp = exp >> 1;
    }
    return t % N;
}

int main () {
    unsigned long long n, t2;
    cin >> n;
    t2 = ( ( pow2(n+1) * (n-1) % N ) % N  + 2 ) % N;
    cout << t2;
}

/**
 1. ( a + b ) % c = ( ( a % c ) + ( b % c ) ) % c
2. ( a * b ) % c = ( ( a % c ) * ( b % c ) ) % c
3. ( a – b ) % c = ( ( a % c ) - ( b % c ) ) % c ( see notes at bottom )
 * /
 /*
 

    ( a – b ) % c = ( ( a % c ) - ( b % c ) ) %c is fine mathematically. But, while programming, don't use

    a=(a%c);
    b=(b%c);
    ans=( a - b )%c;

    instead use

    a=a%c;
    b=b%c;
    ans = ( a - b + c ) % c;

% works differently with -ve number
 */