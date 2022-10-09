#include<iostream>
using namespace std;

int main(){

    int n,m,target;
    cin>>n>>m;
    cin>>target;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    //fimding the target (only apply where both row and column are sorted)
    int r=0,c=m-1;
    while(r<n && c>=0){
        if(arr[r][c]==target){
            cout<<"target found at "<<r<<" "<<c<<endl;
            return 0;
        }
        else if (arr[r][c]>target)
        {
            c--;
        }
        else{
            r++;
        }
     
    }
    cout<<"target not found"<<endl;
    return 0;
}