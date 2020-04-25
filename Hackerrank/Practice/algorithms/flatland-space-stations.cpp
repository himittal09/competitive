#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Complete the flatlandSpaceStations function below.
int flatlandSpaceStations(int m, vector<int>& c) {
    const int n = c.size();
    int maxDiff {0}, diff;

    if (m == n)
    {
        return 0;
    }
    if (n == 1)
    {
        return max(c[0], m-1-c[0]);
    }

    sort(c.begin(), c.end());

    for (int i=1; i<n; i++)
    {
        diff = c[i] - c[i-1];
        maxDiff = max(maxDiff, diff);
    }

    maxDiff /= 2;

    maxDiff = max(maxDiff, c[0]);
    diff = m - c[n-1] - 1;
    maxDiff = max(maxDiff, diff);

    return maxDiff;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, m;
    vector<int> c(m, 0);
    
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> c[i];
    }

    int result = flatlandSpaceStations(n, c);

    cout << result << "\n";

    return 0;
}