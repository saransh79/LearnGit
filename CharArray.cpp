#include <iostream>
using namespace std;

int main()
{
    // we take the size of array 1 more than the number of characters
    char arr[16]="Saransh Gangwar";
    cout<<arr[6]<<arr[7]<<arr[8];

    // how to input the char array?
    // char arr[100];
    // cin>>arr;       //space between the characters seperate them
    // cout<<arr<<"\n"<<arr[5];

    // PALINDROMIC ARRAY
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=true;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=arr[n-1-i])
        check = false;
        break;
    }
    if(check==true)
    cout<<"Array is palindromic";
    else
    cout <<"Array is not palindrome";
    
    return 0;
}