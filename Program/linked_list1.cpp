// Declaring and printing LL
#include <bits/stdc++.h>
using namespace std;

// class to declare node
class node
{
public:
    int data;
    node *next;
};

// function to print data of LL
void print(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
int main()
{
    // Creating a LL of 3 nodes
    // declaring 3 pointers
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    // allocate 3 nodes in heap
    head = new node();
    second = new node();
    third = new node();

    head->data = 1;       // assign data in first node
    head->next = second;  // link 1st node with 2nd node
    second->data = 2;     // assign data in second node
    second->next = third; // link 2nd node to 3rd node
    third->data = 3;      // assign data in third node
    third->next = NULL;   // terminate the LL

    print(head);
    return 0;
}
