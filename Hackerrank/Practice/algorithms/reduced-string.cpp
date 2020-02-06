#include <bits/stdc++.h>
#include <deque>
using namespace std;

string superReducedString(string s) {
    deque <char> mys;
    for (auto ch: s)
    {
        if (mys.empty() || mys.back() != ch)
        {
            mys.push_front(ch);
        }
        else
        {
            mys.pop_back();
        }
    }
    if (mys.empty())
    {
        return "Empty String";
    }
    string result;
    for (deque<char>::iterator it = mys.begin(); it != mys.end(); it++)
    {
        result.push_back(*it);
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
