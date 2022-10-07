#include <bits/stdc++.h>
#define PB push_back
#define ll long long int
#define MP make_pair
#define loop(i,a,b) for (int i = a; i < b; i++)
using namespace std;

//str.erase(1, 4);
//int B = b - '0' + 48;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    loop(i,0,n){
        cin>>a[i];
    }
    int lo=0,hi=n-1,mid;
    while(lo<hi){
        mid = (lo+hi)/2;
        if(a[mid]<a[mid+1]){
            lo = mid+1;
        }
        else{
            hi=mid;
        }
    }
    cout<<lo<<endl;
    return 0;
}