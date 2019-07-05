#include <vector>
#include <regex>
#include<iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    vector<string> names;

    while (N--) {
        string firstname, email;
        cin >> firstname >> email;
        
        regex test(".+@gmail\\.com$");

        if (regex_match(email, test)) {
            names.push_back(firstname);
        }
    }

    sort(names.begin(), names.end());

    for (auto temp : names) {
        cout << temp << endl;
    }

    return 0;
}