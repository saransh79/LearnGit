#include <iostream>
using namespace std;

 int main() {
	 int n,i,j,k;
    cout<<"Enter the size of square matrices\n";
    cin>>n;
    int a[n][n], b[n][n], c[n][n];
    cout<<"Enter all the elements of first matrix\n";
    for ( i = 0; i < n; i++)
    {
        for (  j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter all the elements of second matrix\n";
    for ( i = 0; i < n; i++)
    {
        for (  j = 0; j < n; j++)
        {
            cin>>b[i][j];
        }
    }
    
    for (  i = 0; i < n; i++)
    {
        for (  j = 0; j < n; j++)
        {
            c[i][j]=0;
            for (  k = 0; k < n; k++)
            {
                c[i][j]+=a[i][k] * b[k][j];
            }
             cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
        
	return 0;
}
