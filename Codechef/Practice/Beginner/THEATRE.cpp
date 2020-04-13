#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main () {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int t, n, t, totalProfit {0}, termProfit {0}, maxElem;
    char m;
    unordered_map<int, vector<int>> myMap;
    
    cin >> t;
    while (t--)
    {
        cin >> n;
        termProfit = 0;
        while (n--)
        {
            cin >> m >> t;
            myMap[t][m - 'A']++;
        }
        for (auto& [key, value]: myMap)
        {
            maxElem
        }
        myMap.clear();
    }

    return 0;
}