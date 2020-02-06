#include <iostream>
#include <stack>
#include <ios>
using namespace std;

int main ()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int n, k, t;
    cin >> n >> k;
    stack<int> books;
    while (n--)
    {
        cin >> t;
        if (t > k)
        {
            books.push(t);
            break;
        }
    }
    while (n--)
    {
        cin >> t;
        books.push(t);
    }
    while (!books.empty() && books.top() <= k)
    {
        books.pop();
    }
    cout << books.size() << endl;
    return 0;
}