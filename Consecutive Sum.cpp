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
        int n,k;
        cin>>n>>k;
        int a[n];
        loop(i,0,n)
        cin>>a[i];
        int b[k];
        loop(i,0,k)
        b[i]=-1;
        loop(i,0,n)
        {
            b[i%k]=max(b[i%k],a[i]);
        }
        ll r=0;
        loop(i,0,k)
        r+=b[i];
        cout<<r<<endl;
    }
    return 0;
}
