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
        int a[n];
        loop(i,0,n)
        cin>>a[i];
        
        vector<pair<int,int>> v;
        if((a[0]+a[n-1])%2==1)
        a[n-1]=a[0];
        else
        a[0]=a[n-1];
        v.PB(MP(1,n));
        loop(i,1,n-1)
        {
            if((a[i]+a[0])%2==1){
            a[i]=a[0];
            v.PB(MP(1,i+1));
            }
            else
            {
               a[i]=a[n-1];
                v.PB(MP(i+1,n)); 
            }
            
        }
        if(n==1)
        cout<<"0"<<endl;
        else
        {
            cout<<v.size()<<endl;
            for(auto i:v)
            cout<<i.first<<" "<<i.second<<endl;
        }
        // loop(i,0,n)
        // cout<<a[i]<<" ";
        // cout<<endl;
    }
    return 0;
}
