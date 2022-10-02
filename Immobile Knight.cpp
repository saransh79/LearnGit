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
        int n,m;
        cin>>n>>m;
        if(n<4&&m<4)
        cout<<max(1,(n+1)/2)<<" "<<max(1,(m+1)/2)<<endl;
        else if(n==1||m==1)
        cout<<max(1,n/2)<<" "<<max(1,m/2)<<endl;
        else
        cout<<n/2<<" "<<m/2<<endl;
    }
    return 0;
}
