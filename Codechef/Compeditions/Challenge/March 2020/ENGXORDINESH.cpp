#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int case0;
    cin >> case0;

    while(case0--)
    {
        int se,qu,n,res=0;
        int seq[se];
        
        cin>>se;
        cin>>qu;

        for(int i=0;i<se;i++)
            cin>>seq[i];

        while(qu--)
        {
            cin>>n;

            int odd=0,even=0,a=0;
            while(a<se)
            {
                int cnt;
                res=seq[a]^n;
                bitset<64>set=res;
                cnt=set.count();
                if(cnt%2==0)
                    even++;
                else
                    odd++;
                a++;
            }
            cout<<even<<" "<<odd<<endl;
        }

    }
}