//CODE TO PRINT THE SUM OF ELEMENTS OF ALL POSSIBLE SUBARRAYS

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) 
    cin>>a[i];

    int sum,count=0;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for(int j=i; j<n; j++){
        sum+=a[j];
        count+=sum;
        }
    }
       
    cout<<count;
       return 0;
}