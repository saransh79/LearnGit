// Runtime polymorphism: The decision is made at run time and not compile time. It's done with the help of virtual functions and pointers. As it is known at run time, it provides slow execution. As a result, it is more adaptable, as everything is done at runtime.

// function overloading
#include <iostream>
using namespace std;

// defining the base class
class Base_class
{
public:
    int base_var = 25;

    // defining display function as virtual to override it in derived class
    virtual void display()
    {
        cout << "The value of the base variable is: " << base_var << endl;
    }
};

// defining the derived class
class Derived_class : public Base_class
{
public:
    int derived_var = 80;

    // Overriding the display function
    void display()
    {
        cout << "The value of the base variable is: "
             << base_var << endl
             << "The value of the derived variable is: "
             << derived_var << endl;
    }
};

// driver function
int main()
{

    Derived_class obj;
    obj.display();

    Base_class obj2;
    obj2.display();
    return 0;
}