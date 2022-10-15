// Compile time polymorphism
// operator overloading

#include<iostream>
using namespace std;

class Complex{
    public:
    int real;
    int imaginary;

    //Constructor of complex class
    Complex(int new_real = 0, int new_imaginary = 0){
        real = new_real;
        imaginary = new_imaginary;
    }

    //overloading + operator to add two complex numbers by just using a + operator between two complex objects
    Complex operator + (const Complex& obj) {
        Complex tmp;
        tmp.real = real + obj.real;
        tmp.imaginary = imaginary + obj.imaginary;
        return tmp;
    }

    //To print the number on output
    void print_number(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};

//driver function
int main(){

    //Creating two complex class objects C1 and C2
    Complex C1(5,6), C2(2,3);
    cout<<"C1 = ";
    C1.print_number();
    cout<<"C2 = ";
    C2.print_number();

    //adding C1 and C2 and storing the value in C3 using operator overloading
    Complex C3 = C1 + C2;
    cout<<"C3 = C1 + C2 = ";
    C3.print_number();

    //Using same + operator to add two integers
    cout<<"The sum of 10 and 15 is: "<<10+15;

    return 0;
}