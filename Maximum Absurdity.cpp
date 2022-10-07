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
    t=1;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       ll a[n];
       loop(i,0,n)
       cin>>a[i];
       loop(i,1,n)
       a[i]=a[i]+a[i-1];
       vector<ll> v;
       v.PB(a[k-1]);
       
       loop(i,k,n)
       v.PB(a[i]-a[i-k]);
    
        ll b[2][v.size()];
        b[0][v.size()-1]=v[v.size()-1];
        b[1][v.size()-1]=v.size()-1;
        
        
        for(int i=v.size()-2;i>-1;i--)
        {
        if(v[i]>=b[0][i+1])
        {
            b[0][i]=v[i];
            b[1][i]=i;
        }
        // if(v[i]==b[0][i+1])
        // {
        //     b[0][i]=v[i];
        //     b[1][i]=i;
        // }
        else
        {
            b[0][i]=b[0][i+1];
            b[1][i]=b[1][i+1];
        }
        }
        
        
        int ke=0,l=0;
        ll ma=-1;
        // loop(i,0,2)
        // {
        //     loop(j,0,v.size())
        //     cout<<b[i][j]<<" ";
        //     cout<<endl;
        // }
        
        
        loop(i,0,v.size()-k)
        {
            // loop(j,i+k,v.size())
            // {
                //cout<<j<<endl;
                if((v[i]+b[0][i+k])>ma)
                {
                    ma=v[i]+b[0][i+k];
                    ke=i+1;
                    l=b[1][i+k]+1;
                    
                }
            // }
        }
        cout<<ke<<" "<<l<<endl;
    }
    return 0;
}
