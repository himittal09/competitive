#include <iostream>
#include <vector>

#include <algorithm>
#include <functional>
#include <cmath>
#include <climits>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int the_powerful_dominates (const int sum, const vector<vector<int>>& arr_m, const vector<vector<int>>& arr_n)
{
    typedef pair<double, int> myPair;

    std::function<bool(const myPair&, const myPair&)> myFunc;

    myFunc fun = [](const myPair& p1, const myPair& p2) -> bool{
        return p1.first > p2.first;
    };

    priority_queue<myPair, vector<myPair>, fun> myQ;

}

int main ()
{
    int sum {0};
    int m {0}, n{0};
    cin >> sum;
    cin >> m >> n;
    int gci {0}, pi {0};
    vector<vector<int>> arr_m(m, vector<int>(2, 0));
    int rj {0};
    vector<vector<int>> arr_n(n, vector<int>());

    for (int i=0; i<m; i++)
    {
        cin >> gci >> pi;
        arr_m[i] = {gci, pi};
        // cin >> arr_m[i][0] >> arr_m[i][1];
    }

    for (int j=0; j<n; j++)
    {
        cin >> rj;
        arr_n[j].resize(rj);
        for (int i=0; i<rj; i++)
        {
            cin >> arr_n[j][i];
        }
    }

    int max_power {0};
    max_power = the_powerful_dominates(sum, arr_m, arr_n);

    cout << max_power << "\n";

    return 0;
}