#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
// Function objects( functor)
int main()
{
    int arr[]= {2,5, 6,0,-2};
    // sort(arr, arr+5);     //sort(from, to); It will sort in ascending order
    sort(arr, arr+5, greater<int>());       //It will sort in descending order
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}