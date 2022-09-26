#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;    
     cin>>n; 
 
    int sum=0;   
      int originaln=n;   
      while(n>0){        
      int lastdigit= n%10;     
      sum+= lastdigit*lastdigit*lastdigit;     
      n=n/10;     
      } 
    if(sum==originaln) 
    cout<<"Armstrong number"<<endl;
    else    
    cout<<"not armstrong"<<endl;
    return 0; 
    } 