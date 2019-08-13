#include <iostream>
#include <cstdio>
using namespace std;

int main () {
    int iv;
    long lv;
    char cv;
    float fv;
    double dv;
    cin >> iv >> lv >> cv >> fv >> dv;
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", iv,lv, cv, fv, dv);
    return 0;
}