// Dynamic Memory Allocation of 2D array
#include <iostream>
using namespace std;

int main()
{
    /*
    // Creating a square matrix
    int n; 
    cin>>n;

    int **arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]= new int[n];
    }
    // Taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    // Taking output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    // For any matrix
    int row,col;
    cin>>row>>col;

    int **arr= new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i]= new int[col];
    }
    
    // Taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
    
    }
    // Taking output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
    
    // Deleting allocated Memory
    for (int i = 0; i < row; i++)
    {
        delete []arr[i];
    }
    delete []arr;
    return 0;
}