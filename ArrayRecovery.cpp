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
        int a[n],d[n];
        loop(i,0,n)
        cin>>d[i];
        int c=1;
        a[0]=d[0];
        loop(i,1,n)
        {
            //cout<<d[i]<<" "<<a[i-1]<<endl;
            if(d[i]&&d[i]<=a[i-1])
            {
                c=0;
                break;
            }
            a[i]=d[i]+a[i-1];
            //cout<<a[i]<<" ";
        }
        if(c==1)
        {
            loop(i,0,n)
            cout<<a[i]<<" ";
            cout<<endl;
        }
        else
        cout<<"-1"<<endl;
    }
    return 0;
}
