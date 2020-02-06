#include <bits/stdc++.h>
using namespace std;

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) {
    long *arr = new long[n+1];
    for (int i=0; i<queries.size(); i++) {
        arr[queries[i][0]-1] += queries[i][2];
        arr[queries[i][1]] -= queries[i][2];
    }
    long long maxElem=0, temp=0;
    for (int i=0; i<n; i++) {
        temp += arr[i];
        if (temp > maxElem)
        {
            maxElem = temp;
        }
    }
    return maxElem;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n, m;
    cin >> n >> m;

    vector<vector<int>> queries(m);
    for (int i = 0; i < m; i++) {
        queries[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> queries[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long result = arrayManipulation(n, queries);

    fout << result << "\n";

    fout.close();

    return 0;
}