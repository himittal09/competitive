#include<iostream>
using namespace std;

int main () {

    int n, p1s, p2s, winner, lead, tempLead, cs1 = 0, cs2 = 0;
    cin >> n;
    while (n--) {
        cin >> p1s >> p2s;
        cs1 += p1s;
        cs2 += p2s;
        if (cs1 > cs2) {
            tempLead = cs1-cs2;
            if (tempLead > lead) {
                winner = 1;
                lead = tempLead;
            }
        }
        if (cs2 > cs1) {
            tempLead = cs2-cs1;
            if (tempLead > lead) {
                winner = 2;
                lead = tempLead;
            }
        }
    }
    cout << winner << endl << lead;

    return 0;
}