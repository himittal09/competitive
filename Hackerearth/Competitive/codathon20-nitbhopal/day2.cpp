#include <iostream>
#include <ios>
#include <limits>
#include <numeric>

using namespace std;

int main ()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int q, xorTrack=0;
    short unsigned int n, a, b, c, qt, i, j;
    cin >> n;
    short unsigned int mat[n];
    unsigned int xorMat[n] = {0};
    for (i=0; i<n; i++)
    {
        for (j=0; j<i; j++)
        {
            cin.ignore(10, ' ');    
        }
        cin >> mat[i];
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    cin >> q;
    while (q--)
    {
        cin >> qt >> a >> b >> c;
        xorMat[a-1] ^= c;
        xorMat[b] ^= c;
    }
    for (int i=0; i<n; i++)
    {
        xorTrack ^= xorMat[i];
        mat[i] ^= xorTrack;
    }
    cout << accumulate(mat, mat+n, 0);
    return 0;
}