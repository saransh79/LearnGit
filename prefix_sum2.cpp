                     // PREFIX SUM FOR 2-D array
/*
Given 2d array a of N*N integers.Given Q
queries and in eacj quert giveb=n a,b,c and d
print sum of square represented nt (a,b) as
top left point and (c,d) as bottom right point.
*/




#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define all1(v) v.rbegin(),v.rend()
const int MOD=998244353;
const int MOD1=1e9+7;
const int N=1e3+10;


long long pf[N][N];  
int arr[N][N];     //global variale has default value 0
int  main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];   
             pf[i][j]= arr[i][j] + pf[i][j-1]  +  pf[i-1][j] - pf[i-1][j-1];
        }
    }


    //To Precomputute the rectangle sum

    

    int q;
    cin>>q;
    int a,b,c,d;
    
    while(q--){
        cin>>a>>b>>c>>d;
        cout<<pf[c][d] - pf[c][b-1] - pf[a-1][d] + pf[a-1][b-1]<<endl;
    }
}


