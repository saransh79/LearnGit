#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define all1(v) v.rbegin(),v.rend()
const int MOD=998244353;
const int MOD1=1e9+7;
const int N=1e6+10;


int binarySearch(vector<int>&array, int x, int low, int high) {
  
    // Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
    }

  return -1;
}

int linearSearch(vector<int> &a, int x){
    for(int i=0;i<a.size();i++){
        if(x==a[i]){
            return i;
        }
    }
    return -1;
}
void solve(){
    int n;
    cin>>n;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        b.push_back(x);
    }
    sort(all(a));
    int count=0;
    for(int i=0;i<n;i++){
        int j;/*binarySearch(a,b[i],0,n-1);*/
            j=linearSearch(b,a[i]);
          // cout<<j<<endl;
            int x=b[i]&a[j];
            if((x!=0)){
            count++;
            swap(b[i],b[j]);
            }  
        }
    
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    

}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
    }   
return 0;
}
