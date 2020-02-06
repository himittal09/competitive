#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    unsigned long long m, n, temp, totalree=0, mceil=0;
    cin >> n >> m;
    vector <unsigned long long> queries;
    while (n--) {
        cin >> temp;
        queries.push_back(temp);
        totalree += temp;
    }
    totalree = totalree / m;
    sort (queries.begin(), queries.end());
    for (int i=queries.size()-1; i>=0 && mceil < totalree; i--) {
        mceil += queries[i];
    }
    cout << mceil;
    return 0;
}
