#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void finalizeEmail (string& str)
    {
        size_t plusIndex = str.find('+');
        if (plusIndex != string::npos)
        {
            str.erase(str.begin() + plusIndex, str.begin() + str.find('@'));
        }
        plusIndex = str.find('@');
        str.erase(remove(str.begin(), str.begin() + plusIndex, '.'), str.begin() + plusIndex);
    }

    int numUniqueEmails(vector<string>& emails) {
        unordered_set <string> mymap;
        for (string email: emails)
        {
            finalizeEmail(email);
            mymap.insert(email);
        }
        return mymap.size();
    }
};

int main ()
{
    vector <string> vec{{"test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"}};
    Solution obj;
    cout << obj.numUniqueEmails(vec);
}