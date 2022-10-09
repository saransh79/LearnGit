

/*Print all the subsequence of an array using recursion
3,2,1
O/P: 
3
2
1
3,2
3,1
2,1
3,2,1
{}*/	

/*#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define all1(v) v.rbegin(),v.rend()
const int MOD=998244353;
const int MOD1=1e9+7;
const int N=1e6+10;

void p(int ind,vector <int> &b,int arr[],int n){
	if (ind>=n){
		for(int i=0;i<b.size();i++)
		cout<<b[i]<<" ";
		cout<<endl;
		return ;
	}
	b.push_back(arr[ind]);
	p(ind+1,b,arr,n);
	b.pop_back();
	p(ind+1,b,arr,n);
}


int  main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int arr[]={3,2,1};
    int n=3;
    vector <int> b;
    p(0,b,arr,n);
}*/


//To print all subsequence with sum=k
//1 2 1   k=2
//O/P;
//1,1
//2


/*#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define all1(v) v.rbegin(),v.rend()
const int MOD=998244353;
const int MOD1=1e9+7;
const int N=1e6+10;

void p(int ind,vector <int> &b,int arr[],int n,int sum,int k){
	if (ind>=n){
		if(sum==k){
		for(int i=0;i<b.size();i++){
		cout<<b[i]<<" ";
		}
		cout<<endl;
	}
		return ;
	}
	b.push_back(arr[ind]);
	sum+=arr[ind];
	p(ind+1,b,arr,n,sum,k);
	b.pop_back();
	sum-=arr[ind];
	p(ind+1,b,arr,n,sum,k);
}




void solve(){
	int arr[]={1,2,1};
    int n=3;
    vector <int> b;
    int k=2;
    p(0,b,arr,n,0,k);

}

int  main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 	
 	solve();
}*/



//To print only one subsequnece with sum=k



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

bool p(int ind,vector <int> &b,int arr[],int n,int sum,int k){
	if (ind>=n){
		if(sum==k){
		for(int i=0;i<b.size();i++){
		cout<<b[i]<<" ";
		}
		return true;
		cout<<endl;
	}
		return false;
	}

	b.push_back(arr[ind]);
	sum+=arr[ind];
	if(p(ind+1,b,arr,n,sum,k)==true)
		return true;
	b.pop_back();
	sum-=arr[ind];
	if(p(ind+1,b,arr,n,sum,k)==true)
		return true;

	return false;
}




void solve(){
	int arr[]={1,2,1};
    int n=3;
    vector <int> b;
    int k=2;
    p(0,b,arr,n,0,k);

}

int  main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 	
 	solve();
}