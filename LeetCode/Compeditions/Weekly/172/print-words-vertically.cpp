#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

class Solution {
public:
    string rtrim (string& str)
    {
        size_t end = str.find_last_not_of(" ");
        return (end == string::npos) ? string("") : str.substr(0, end+1);
    }

    vector<string> printVertically(string s) {
        int maxLenStr=0, i;
        stringstream check1(s); 
        string intermediate; 
        
        while(getline(check1, intermediate, ' ')) 
        {
            maxLenStr = max(maxLenStr, (int)intermediate.length());
        }
        
        vector<string> solution (maxLenStr);
        check1.clear();
        check1.seekg(std::ios::beg);
    
        while(getline(check1, intermediate, ' '))
        {
            for (i=0; i<intermediate.length(); i++)
            {
                solution[i] += intermediate[i];
            }
            for (; i<maxLenStr; i++)
            {
                solution[i] += ' ';
            }
        }

        for (string& str: solution)
        {
            str = rtrim(str);
        }

        return solution;
    }
};

int main ()
{
    Solution obj;
    vector<string> ans = obj.printVertically(string("HOW ARE YOU"));
    for (string line: ans)
    {
        cout << line << endl;
    }
    return 0;
}