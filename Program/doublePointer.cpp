#include <iostream>
using namespace std;

void update(int **p2){
    // p2=p2+1;         //No change in i, p1, p2
    // *p2= *p2 +1;     //No change in i and p2 but p1 will change
    **p2= **p2 +1;     //No change in p1 and p2 but i will change
}
int main()
{
    int i=5;           //integer
    int *p1= &i;       //pointer
    int **p2= &p1;     //double pointer
/*
    //They all will print same value
    cout<<i<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl<<endl;

    //They all will print the address of i or value of p1
    cout<<&i<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl;
    cout<<&(*p1)<<endl<<endl;

    //They all will print address of p1 or value of p2
    cout<<&p1<<endl;
    cout<<p2<<endl;
    cout<<&(*p2)<<endl<<endl;

    //They all will print address of p2
    cout<<&p2<<endl;
*/

    cout<<"before "<<i<<endl;
    cout<<"before "<<p1<<endl;
    cout<<"before "<<p2<<endl<<endl;
    update(p2);
    cout<<"after "<<i<<endl;
    cout<<"after "<<p1<<endl;
    cout<<"after "<<p2<<endl;
    return 0;
}