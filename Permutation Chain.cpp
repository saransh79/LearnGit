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
    while(t--)
    {
       int n;
       cin>>n;
       int a[n+1];
       loop(i,0,n)
       a[i]=i+1;
       cout<<n<<endl;
       loop(i,1,n+1)
       {
          loop(j,0,n)
          {
            cout<<a[j]<<" ";
          }
          cout<<endl;
          int b=a[i];
          a[i]=a[i-1];
          a[i-1]=b;
       }
       
    }
    return 0;
}
