/*
Stack: 
In stack memory allocation and deallocation perform automatically.
We need to declare the size of stack, if stack is full it will show stack overflow.

Heap:
We need to allocate and deallocate the memory in heap manually.
Deallocation of memory should be performed sincerely, otherwise memory leak can be occur.
*/
#include <iostream>
using namespace std;

int main()
{
    int n=12;      //stored in stack
    int *p= new int();     //allocation of memory in heap
    *p = 10;
    delete(p);       //deallocate memory in heap
    p = new int[4];      //allocate memory for integer array of size 4
    delete[]p;          //deallocate memory for integer array of size 4
    p= NULL;          //value of pointer p becomes null
    return 0;
}