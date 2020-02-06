#include <iostream>
#include <ios>
#include <climits>

using namespace std;

int main ()
{
    std::ios::sync_with_stdio(false);
	cin.tie(NULL);

    long long int t, n, arrItem, mmin;
    cin >> t;

    while (t--)
    {
        cin >> n;
        mmin = INT_MAX;
        for (int i=0; i<n; i++)
        {
            cin >> arrItem;
            mmin = min(arrItem, mmin);
        }
        cout << mmin * (n-1) << endl;
    }
 
    return 0;
}