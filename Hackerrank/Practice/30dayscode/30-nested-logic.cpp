#include<iostream>
using namespace std;

int main () {
    int Da, Ma, Ya, De, Me, Ye, fine=0;
    cin >> Da >> Ma >> Ya >> De >> Me >> Ye;
    if (Ya > Ye) {
        fine = 10000;
    } else if (Ya < Ye) {
        fine = 0;
    } else if (Ma > Me) {
        fine = 500 * (Ma-Me);
    } else if (Ma < Me) {
        fine = 0;
    } else if (Da > De) {
        fine  = 15 * (Da-De);
    }
    cout << fine;
}