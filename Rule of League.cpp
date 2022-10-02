#include<bits/stdc++.h>
#define PB push_back
#define ll long long int
#define MP make_pair
#define loop(i, a, b) for (int i = a; i < b; i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        if((x!=0&&y!=0)||(x==0&&y==0))
        cout<<"-1"<<endl;
        else
        {
            int a=max(x,y);
            if((n-1)%a==0)
            {
                int j=2;
                loop(k,0,(n-1)/a)
                {
                    loop(i,0,a)
                    cout<<j<<" ";
                    // if(j==1)
                    // j++;
                    j+=a;
                }
                cout<<endl;
                // while(j+y<=n)
                // {
                //     loop(i,0,y)
                //     cout<<j<<" ";
                //     j+=y+1;
                // }
            }
            else
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
