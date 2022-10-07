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
        
        int n;
        cin>>n;
        string s;
        cin>>s;
        s='!'+s;
        ll r=0;
        vector<int>v(n+1,0);
        loop(i,1,n+1)
        {
            if(s[i]=='0')
            {
                for(int j=i;j<=n;j+=i)
                {
                    if(v[j]==1)
                    continue;
                    if(s[j]=='0')
                    {
                        r+=i;
                        v[j]=1;
                    }
                    else
                    break;
                }
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
