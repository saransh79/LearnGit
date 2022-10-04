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
	   int a[n],b[n];
	   loop(i,0,n)
	   cin>>a[i];
	   loop(i,0,n)
	   cin>>b[i];
	   int mx=a[0],mn=a[0];
	   loop(i,0,n)
	   {
	       mx=max(mx,a[i]+b[i]);
	       mn=min(mn,a[i]-b[i]);
	   }
	   int s=(mn+mx);
	   cout<<s/2;
	   if(s%2==1)
	   cout<<".5";
	   cout<<endl;
	}
    return 0;
}
