#include <bits/stdc++.h>

using namespace std;

int main()
{

    ofstream fout(getenv("OUTPUT_PATH"));

    int strings_count;
    cin >> strings_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string strings_item;
    unordered_map <string, int> mymap;
    for (int i = 0; i < strings_count; i++) {
        getline(cin, strings_item);
        mymap[strings_item]++;
    }
    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> result;
    for (int i = 0; i < queries_count; i++) {
        getline(cin, strings_item);
        result.push_back(mymap[strings_item]);
    }
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
