#include<bits/stdc++.h>
#include<unordered_map>
#include<iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        string temp;
        cin >> n >> k;
        unordered_map<string, string> ancientWordList;
        
        // taking the ancientWordList words input
        while (n--) {
            cin >> temp;
            ancientWordList.insert(make_pair(temp, "NO"));
        }
        
        // taking the modern phase input and then checking if ancientWordList words are in it
        while (k--) {
            int l;
            cin >> l;
            while (l--) {
                cin >> temp;
                if (ancientWordList.find(temp) != ancientWordList.end()) {
                    // update the value here   
                    ancientWordList[temp] = "YES";
                }
            }
        }

        // check for all key value pairs and print in the console
        for (auto p = ancientWordList.begin() ; p != ancientWordList.end() ; p++) {
            cout << p -> second << " ";
        }
        cout << endl;

    }
}