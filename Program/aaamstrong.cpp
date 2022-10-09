#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int n;
    cout<<"enter the number which u want to check is amstrong number or not."<<endl;
    cin>>n;
    
    int sum=0;
    int m=n;
    while(n>0){
        int r=n%10;
        sum+= pow(r,3);
        n=n/10;
    }
    if(sum==m){
        cout<<"It is an amstrong number.";
    }
    else{
        cout<<"It is not a amstrong number.";
    }
    return 0;
    
}