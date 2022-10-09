#include <bits/stdc++.h>
#include <iostream>
#define long long ll
const int long long N=1e9+7;
using namespace std;
long mod(long long int  n,long long int  m,long long int  N)
{
	int long long res=1;
 while(m>0)
        {
        	if(m&1==1)
          res=(res*n)%N;          
        
          n=(n*n)%N;
           m=m>>1;
        }
        return res;
}
int  main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    while(t--)
    {
    	
    	int long long n,m,x,res;
        cin>>n>>m;
        x= mod(2,n,N);
        res=mod(x-1,m,N);
        cout<<res<<endl;
        
    }
    
}