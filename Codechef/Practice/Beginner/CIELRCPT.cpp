#include<iostream>
using namespace std;

int getMenus (int budget) {
    int menuCount=0, menuItems=11;
    int menuItemPrice[12] = { 1,2,4,8,16,32,64,128,256,512,1024,2048 };
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