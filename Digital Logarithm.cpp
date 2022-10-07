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
        sort(a,a+n);
        sort(b,b+n);
        // vector<int> v,u;
        int j=0;
        int c=0;
        // sort(a,a+n);
        // sort(b,b+n);
        // loop(i,0,n)
        // cout<<a[i]<<" ";
        // cout<<endl;
        // loop(i,0,n)
        // cout<<b[i]<<" ";
        // cout<<endl;
        loop(i,0,n)
        {
            if(j==n)
            break;
            // if(a[i]==b[j])
            // {
            //     a[i]=0;
            //     b[j]=0;
            // }
            while(j<n&&a[i]>b[j])
            j++;
            if(a[i]==b[j])
            {
                a[i]=0;
                b[j]=0;
                c++;
            }
        }
        sort(a,a+n);
        sort(b,b+n);
        // loop(i,0,n)
        // cout<<a[i]<<" ";
        // cout<<endl;
        // loop(i,0,n)
        // cout<<b[i]<<" ";
        // cout<<endl;
        int r=0;
        for(int i=n-1;i>j-1;i--)
        {
            if(a[i]>9){
            a[i]=int(log10(a[i]));
            r++;
            }
            if(b[i]>9){
            b[i]=int(log10(b[i]));
            r++;
            }
        }
        sort(a+c,a+n);
        sort(b+c,b+n);
        // sort(a,a+n);
        // sort(b,b+n);
        // loop(i,0,n)
        // cout<<a[i]<<" ";
        // cout<<endl;
        // loop(i,0,n)
        // cout<<b[i]<<" ";
        // cout<<endl;
        j=c;
        loop(i,c,n)
        {
            if(j==n)
            break;
            // f(a[i]==b[j])
            // {
            //     a[i]=0;
            //     b[j]=0;
            // }
            while(j<n&&a[i]>b[j])
            j++;
            if(a[i]==b[j])
            {
                a[i]=0;
                b[j]=0;
                c++;
            }
        }
        sort(a+c,a+n);
        sort(b+c,b+n);
        loop(i,c,n)
        {
            r+=(a[i]>1)+(b[i]>1);
        }
        cout<<r<<endl;
        //cout<<"---"<<endl;
    }
    return 0;
}
