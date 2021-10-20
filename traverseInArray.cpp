#include <iostream>
using namespace std;

int position(int a[], int n, int num){
    for (int i = 0; i < n; i++)
    {
        if (a[i]==num)
            return i;
        
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int num;
    cin>>num;

    cout<<position(a,n,num );
    
    return 0;
}