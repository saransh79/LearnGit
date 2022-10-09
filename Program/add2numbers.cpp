#include<iostream>
using namespace std;

int add(int n1,int n2){
    int sum=n1+n2;
    return sum;
}

int main(){
    int a,b,c,d;
    cout<<"enter numbers:";
    cin>>a>>b>>c>>d;
    cout<<add(a,b)<<" "<<add(c,d)<<endl;

    return 0;
}