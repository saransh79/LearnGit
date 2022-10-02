#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int lo = 0, hi = n - 1, mid,c=0;
    int to_find;
    cin >> to_find;
    while(lo<=hi){
        mid = (lo+hi)/2;
        if(v[mid]==to_find){
            cout<<mid<<endl;
            c=1;
            break;
        }
        else if(v[mid]<to_find){
            lo = mid +1;
        }
        else if(v[mid]>to_find){
            hi = mid-1;
        }
    }
    if(c==0){
        cout<<"NOT FOUND"<<endl;
    }
    return 0;
}