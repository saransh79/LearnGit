#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int n;int c=0;
    cout<<"enter the number which u want to check is armstrong number or not."<<endl;
    cin>>n;
    
    long sum=0;
    int m=n;int k=n;
    cout<<m<<endl;
    while(m>0){
        c++;
        m/=10;
    }
    while(k>0)
    {
        int r=k%10;
        sum+=round(pow(r,c));
        k=k/10;
    }
    if(sum==n){
        cout<<"It is a armstrong number.";
    }
    else{
        cout<<"It is not a armstrong number.";
    }
    return 0;
    
}
