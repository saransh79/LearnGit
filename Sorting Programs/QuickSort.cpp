#include <bits/stdc++.h>
using namespace std;

int partition(int *arr,int low,int high){
    int p=arr[low];
    int i=low-1;
    int j=high+1;
    while(true){
        do{
            i++;
        }while(arr[i]<p);
        do{
            j--;
        }while(arr[j]>p);
        if(i>=j){
            return j;
        }
        swap(arr[i],arr[j]);
    }
}

void quickSort(int *arr,int low,int high){
    if(low<high){
        int p=partition(arr,low,high);
        quickSort(arr,low,p);
        quickSort(arr,p+1,high);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<" of the array";
        cin>>arr[i];
    }
    quickSort(arr,0,n);
    cout<<"\nThe sorted array is : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
