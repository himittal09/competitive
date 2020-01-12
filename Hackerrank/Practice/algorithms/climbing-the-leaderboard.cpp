// #include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <stack>
using namespace std;

int main() {

    int scores_count, item;
    scanf("%d", &scores_count);

    stack <int> scores;

    while (scores_count--) {
        scanf("%d", &item);
        if (scores.empty() || scores.top() != item) {
            scores.push(item);
        }
    }

    int alice_count;
    scanf("%d", &alice_count);
    vector<int> alice;

    while (alice_count--) {
        scanf("%d", &item);
        while (!scores.empty() && scores.top() <= item) {
            scores.pop();
        }
        alice.push_back(scores.size() + 1);
    }

    for (auto al: alice) {
        printf("%d\n", al);
    }

    return 0;
}
