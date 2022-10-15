// Encapsulation (information/data hiding): Wrapping up data members and functions
// Fully encapsulated class: A class with all private members

#include <iostream>
using namespace std;

class student{
    string name= "Ram";
    int age= 16;
    public:
    string getName(){
        return this->name;
    }
    int getAge(){
        return this->age;
    }
};

int main()
{
    student s;
    cout<<s.getAge()<<endl;
    cout<<s.getName()<<endl;
    return 0;
}