#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    /*A constructor is a special member function with the same name as the class.The constructor doesn’t have a return type.Constructors are used to initialize the objects of its class.Constructors are automatically invoked whenever an object is created.  */

    complex(void);     //constructor declaration
    void getdata()
    {
        cout << "Required complex number is : " << a << " + " << b << "i" << endl;
    }
};
// using constructor
complex::complex(void)
{
    a = 12;
    b = 23;
}
int main()
{
    complex o1;
    o1.getdata();
    return 0;
}
/*
Important Characteristics of Constructors in C++

A constructor should be declared in the public section of the class
They are automatically invoked whenever the object is created
They cannot return values and do not have return types
It can have default arguments
We cannot refer to their address
*/ 