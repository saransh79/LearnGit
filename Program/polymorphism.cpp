/*
 Polymorphism: Having many forms
 Types: 
(1) Compile time polymorphism:  
(2) Run time polymorphism

=> Compile time polymorphism
(1) Function overloading: Using functions with same name.
(2) operator overloading
*/


//function overloading
#include<iostream>
using namespace std;

class Areas{
    public:
    //Function to find area of square
    int area(int side){
        return side*side;
    }

    //Function to find area of rectangle
    int area(int length, int breadth){
        return length*breadth;
    }

    //Function to find area of circle
    float area(float r){
        return 3.14*r*r;
    }
};

//driver function
int main(){

    Areas square;
    //Here, the first area function is called as we have provided only one parameter, and that is also of integer type
    cout<<"The area of a square of side 5 is: "
        <<square.area(5)<<endl;

    Areas rectangle;
    //Here, the second function is called because we have passed two parameters
    cout<<"The area of a rectangle of length 6 and breadth 8 is: "
        <<rectangle.area(6,8)<<endl;

    Areas circle;
    //here we have to define a variable radius as float to tell the compiler to invoke the third area function
    float radius = 7.0;
    cout<<"The area of a circle of side 7 is: "
        <<circle.area(radius)<<endl;

    return 0;
}