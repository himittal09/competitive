#include<iostream>
using namespace std;

int getMenus (int budget) {
    int menuCount=0, menuItems=5;
    int menuItemPrice[6] = { 1,2,5,10,50,100 };
    while(true) {
        while (budget >= menuItemPrice[menuItems]) {
            budget = budget - menuItemPrice[menuItems];
            menuCount++;
        }
        while (budget < menuItemPrice[menuItems]) {
            menuItems--;
        }
        if (!budget) {
            break;
        }
    }
    return menuCount;
}

int main () {
    int t, budget;
    cin >> t;
    while (t--) {
        cin >> budget;
        cout << getMenus(budget) << endl;
    }
}