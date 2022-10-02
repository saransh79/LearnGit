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
        if(n%2==0)
        for(int i=n-2;i>0;i--)
        {
            cout<<i<<" ";
        }
        else
        {
            loop(i,1,4)
            cout<<i<<" ";
            for(int i=n-2;i>3;i--)
            {
                cout<<i<<" ";
            }
        }
        cout<<n-1<<" "<<n<<endl;
    }
    return 0;
}
