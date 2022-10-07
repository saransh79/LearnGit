#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Q: Find how many bits we need to change if we want to convert a number to another.
    int a, b;
    cin>>a>>b;
    // we are converting a into b
    // First we need to find how many bits are different in these two numbers so we use XOR operator, as it return true if both bits are different
    int temp= a^b;
    // now we need to check how many times 1 is present in binary representation of temp
    // here we use (n & (n-1)) rule bcz it nullify first MSB of number and regularly update count variable to count how many times we perform that operation
    int count=0;
    while (temp!=0)
    {
        temp= temp & (temp-1);
        count++;
    }
    cout<<count<<endl;

    // Q2: Find how many bits are present in a number?
    int n;
    cin>>n;
    cout<<int(log2(n) + 1)<<endl;

    // Q3: Given an array of n integers where except one integer each integer repeat two times. You need to find out the integer which don't repeat 
    int k;
    cin>>k;
    int arr[k];
    for (int i = 0; i < k; i++)
        cin>>arr[i];
    int ans=0;
    for (int  i = 0; i < k; i++)
        ans^=arr[i];    //XOR vanishes two same numbers and 0^a=a
    cout<<ans<<endl;
    return 0;
}