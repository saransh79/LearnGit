#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int n;int c=0;
    cout<<"enter the number which u want to check is amstrong number or not."<<endl;
    cin>>n;
    
    int sum=0;
    int m=n;int k=n;
    while(n>0){
        c++;
        n/=10;
    }
    while(k!=0)
    {
        int r=k%10;
        sum+= pow(r,c);
        k=k/10;
    }
    if(sum==m){
        cout<<"It is an armstrong number.";
    }
    else{
        cout<<"It is not a armstrong number.";
    }
    return 0;
    
}
