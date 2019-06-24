#include<iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int customerCount, sodaFlavours;
        cin >> customerCount >> sodaFlavours;
        int sodaStock[sodaFlavours];
        int sodaSellOrder[customerCount]={0};

        int revenue=0;

        for (int i=0 ; i<sodaFlavours ; i++) {
            cin >> sodaStock[i];
        }
        int favoriteSoda, goodMoney, badMoney;
        for (int customer=0 ; customer<customerCount ; customer++) {
            cin >> favoriteSoda >> goodMoney >> badMoney;
            if (sodaStock[favoriteSoda-1] > 0) {
                revenue = revenue+goodMoney;
                sodaStock[favoriteSoda-1]--;
                sodaSellOrder[customer]=favoriteSoda;
            } else {
                // sell a random soda to the customer here here
            }
        }

        cout << revenue << endl;
        for (int i=0 ; i<customerCount ; i++) {
            cout << sodaSellOrder[i] << " ";
        }
    }
}