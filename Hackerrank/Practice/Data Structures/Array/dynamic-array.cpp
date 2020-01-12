#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> seq(n);
    vector<int> lastreturn;
    int lastAnswer=0;
    for (int i=0; i<queries.size(); i++) {
        if (queries[i][0] == 1) {
            seq.at((queries[i][1]^lastAnswer)%n).push_back(queries[i][2]);
            // q1type
        } else {
            lastAnswer = seq.at((queries[i][1]^lastAnswer)%n).at(queries[i][2] % seq.at((queries[i][1]^lastAnswer)%n).size());
            // q2type
            lastreturn.push_back(lastAnswer);
        }
    }
    return lastreturn;
}

int main()
{
    int n, q;
    ofstream fout(getenv("OUTPUT_PATH"));
    cin >> n >> q;

    vector<vector<int>> queries(q);

    for (int i = 0; i < q; i++) {
        queries[i].resize(3);
        for (int j=0; j<3; j++) {
            cin >> queries[i][j];
        }
    }

    vector<int> result = dynamicArray(n, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
