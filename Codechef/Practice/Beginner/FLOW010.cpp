#include<iostream>
using namespace std;

int main () {
    int t;
    char c;
    cin >> t;
    while (t--) {
        cin >> c;
        switch (c) {
            case 'B':
            case 'b':
                cout << "BattleShip\n";
                break;
            
            case 'C':
            case 'c':
                cout << "Cruiser\n";
                break;
            
            case 'D':
            case 'd':
                cout << "Destroyer\n";
                break;
            
            case 'F':
            case 'f':
                cout << "Frigate\n";
                break;

            default:
                break;
        }
    }

}