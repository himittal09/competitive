#include <iostream>

using namespace std;

int main ()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t {0}, n{0}, num {0}, counter{0};
    bool isFollowing {true};
    cin >> t;

    while (t--)
    {
        cin >> n;
        isFollowing = true;
        counter = 0;

        do
        {
            cin >> num;
            n--;
        } while (num == 0);

        while (n--)
        {
            cin >> num;
            if (num == 0)
            {
                counter++;
            }
            else
            {
                if (counter < 6)
                {
                    isFollowing = false;
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    break;
                }
                else
                {
                    counter = 0;
                }
            }
        }
        if (isFollowing)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}