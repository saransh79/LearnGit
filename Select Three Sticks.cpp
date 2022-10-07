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
        map<int,int> m;
        int a[n];
        loop(i,0,n){
        cin>>a[i];
        m[a[i]]++;
        //d=max(m[a[i]]);
        }
        sort(a,a+n);
        int d=abs(a[1]-a[0])+abs(a[2]-a[1]);
        loop(i,0,n-2)
        d=min(d,abs(a[i+1]-a[i])+abs(a[i+2]-a[i+1]));
        cout<<d<<endl;
    }
    return 0;
}
