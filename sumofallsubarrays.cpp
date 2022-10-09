#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;

    int arr[n];  
    cout<<"enter the elements of array"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int current=0;
    for(int i=0; i<n;i++){
        current=0;
        for(int j=i;j<n;j++){
            current +=arr[j];
            cout<<current<<endl;
        }
        
    }
    
    return 0;
}