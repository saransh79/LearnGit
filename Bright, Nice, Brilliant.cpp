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
        loop(i,1,n+1)
        {
            loop(j,1,i+1)
            if(j==1||j==i)
            cout<<"1"<<" ";
            else
            cout<<"0"<<" ";
            cout<<endl;
        }
        
    }
    return 0;
}
