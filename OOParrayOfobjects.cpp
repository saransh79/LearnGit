// #include <iostream>
// using namespace std;

// class employee{
//     int id;
//     int salary;
//     public:
//     void set(){
//         cout<<"Enter the id and salary of employee: ";
//         cin >>id>>salary;
//     }
//     void get(){
//         cout<<"The id and salary of this employee is: "<<id<<" and "<<salary<<endl;
//     }
// };
// int main()
// {
//     employee arr[4];  //arr is an array of objects
//     for (int i = 0; i < 4; i++)
//     {
//         arr[i].set();
//         arr[i].get();
//     }
    
//     return 0;
// }

// PASSING OBJECTS IN FUNCTION
#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void input(int n, int m){
        a=n;
        b=m;
    }
    void sumOfcomplex(complex c1, complex c2){
        a=c1.a + c2.a;
        b=c1.b + c2.b;
    }
    void display(){
        cout<<"Your complex number is :"<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.input(3,6);
    c1.display();

    c2.input(2, 8);
    c2.display();
    
    c3.sumOfcomplex(c1,c2);
    c3.display();
    return 0;
}