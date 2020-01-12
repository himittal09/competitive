#include <bits/stdc++.h>

using namespace std;

bool matching_pair (char c1, char c2)
{
    if (c1 == '(' && c2 == ')') return true;
    if (c1 == '{' && c2 == '}') return true;
    if (c1 == '[' && c2 == ']') return true;
    return false;
}

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack <char> mystack;
    for (char ch: s)
    {
        if (ch == '(' || ch == '{' || ch == '[')
        {
            mystack.push(ch);
        }
        else if (mystack.empty() || !matching_pair(mystack.top(), ch))
        {
            return "NO";
        }
        else
        {
            mystack.pop();
        }
        
    }
    return mystack.empty() ? "YES" : "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
