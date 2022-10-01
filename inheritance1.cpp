// Inheritance syntax and visibility mode

#include <iostream>
using namespace std;
// Base class
class employee {
    public:
    int id;
    employee(int intId){
        id=intId;
    }
    employee(){}
    
};
 /* Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:

Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited
*/

// Derived class
class programmer:public employee{
    public:
    float salary;
    programmer(int a){
        salary=a;
    }
    void get(){
        cout<< "the id and salary of programmer is: "<<id<<" and "<<salary<<endl;
    }
};
int main()
{
    employee saransh(34);
    cout<<saransh.id<<endl;
    
    programmer n(2345);
    // cout<<n.id<<endl;
    cout<<n.salary<<endl;
    n.get();

    return 0;
}