#include <bits/stdc++.h>
#include <vector>
#include <set>
using namespace std;
using std::vector;

// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(set<int, std::greater<int> > scores, vector<int> alice) {
    
    vector<int> aliceRank;
    
    for (auto aliceScore: alice) {
        int counter=1;
        for (auto newScore : scores) {
            if (newScore > aliceScore) {
                counter++;
            } else {
                break;
            }
        }
        aliceRank.push_back(counter);
    }
    return aliceRank;
}

int main() {

    int scores_count, item;
    cin >> scores_count;
    set<int, std::greater<int> > scores;
    // set<int, greater> scores;

    for (int i = 0; i < scores_count; i++) {
        cin >> item;
        scores.insert(item);
    }

    int alice_count;
    cin >> alice_count;
    vector<int> alice(alice_count);

    for (int i = 0; i < alice_count; i++) {
        cin >> item;
        alice[i] = item;
    }

    vector<int> result = climbingLeaderboard(scores, alice);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }

    return 0;
}