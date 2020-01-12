#include <iostream>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string S) {
        string soln;
        short unsigned int counter=0;
        for (char ch: S)
        {
            if (ch == '(')
            {
                counter++;
                if (counter != 1)
                {
                    soln.push_back('(');
                }
            }
            else
            {
                counter--;
                if (counter)
                {
                    soln.push_back(')');
                }
            }
        }
        return soln;
    }
};

int main ()
{
	Solution str;
	cout << str.removeOuterParentheses("(()())(())");
	return 0;
}
