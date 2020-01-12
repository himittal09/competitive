#include <bits/stdc++.h>
using namespace std;

int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3, unsigned long v1, unsigned long v2, unsigned long v3) {
    int v1flag = 0, v2flag = 0, v3flag = 0;
    unsigned long result;

    while (v1 != v2 || v2 != v3)
    {
        result = min({v1, v2, v3});

        if (v1 > result)
        {
            v1 -= h1[v1flag];
            v1flag++;
        }

        if (v2 > result)
        {
            v2 -=h2[v2flag];
            v2flag++;
        }

        if (v3 > result)
        {
            v3 -=h3[v3flag];
            v3flag++;
        }
    }

    return v1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    unsigned long v1 = 0, v2 = 0, v3 = 0;

    vector<int> h1(n1);
    for (int i = 0; i < n1; i++) {
        cin >> h1[i];
        v1 += h1[i];
    }

    vector<int> h2(n2);
    for (int i = 0; i < n2; i++) {
        cin >> h2[i];
        v2 += h2[i];
    }

    vector<int> h3(n3);
    for (int i = 0; i < n3; i++) {
        cin >> h3[i];
        v3 += h3[i];
    }

    fout << equalStacks(h1, h2, h3, v1, v2, v3) << "\n";

    fout.close();

    return 0;
}