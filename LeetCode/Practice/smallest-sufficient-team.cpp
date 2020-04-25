#include <vector>
#include <iostream>
#include <unordered_map>
#include <climits>
#include <algorithm>

using namespace std;

class Solution {
    vector<int> people_hash;
    int req_skill_hash;
    int people_count;
    vector<int> sol;

    void smallTeam (int index, vector<int> peopleCount, int runningHash = 0)
    {
        if (runningHash == req_skill_hash && peopleCount.size() < people_count)
        {
            sol = peopleCount;
            people_count = peopleCount.size();
            return;
        }
        if (index == people_hash.size())
        {
            return;
        }
        smallTeam(index+1, peopleCount, runningHash);
        peopleCount.push_back(index);
        smallTeam(index+1, peopleCount, (runningHash | people_hash[index]));
    }
public:
    Solution (): req_skill_hash{0}, people_count{100} {}
    
    vector<int> smallestSufficientTeam(vector<string>& req_skills, vector<vector<string>>& people) {
        
        unordered_map<string, int> myMap;
        for (const string& skill: req_skills)
        {
            req_skill_hash |= (1 << myMap.size());
            myMap[skill] = myMap.size();
        }

        for (const vector<string>& p: people)
        {
            int hash {0};
            for (const string& str: p)
            {
                hash |= (1 << myMap[str]);
            }
            people_hash.push_back(hash);
        }

        smallTeam(0, {});

        return sol;

        // for each people hash, choose whther to include him or not in the array
    }
};