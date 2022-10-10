// Inserting a node in LL
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

// Inserting in front
void push(node **head_ref, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Inserting after a node
void insertAfter(node* prev_node, int new_data){
    if (prev_node== NULL)
    {
        cout<<"Previous node cannot be null";
    }
    
    node* new_node= new node();
    new_node->data= new_data;
    new_node->next= prev_node->next;
    prev_node->next= new_node;
}

// Inserting at end of LL
void append(node** head_ref, int new_data){
node* new_node= new node();
new_node->data= new_data;
// Check if LL is empty
if (head_ref==NULL)
{
    *head_ref= new_node;
    return;
}
// traversing to the end of LL
node* last= *head_ref;
while (last->next != NULL)
{
    last= last->next;
}
// Now last is last node
last->next= new_node;
new_node->next= NULL;
}
void print(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout<<endl;
}

// Searching in LL
bool search(node* head_def, int key){
    while (head_def!= NULL)
    {
        if (head_def->data == key)
        {
            return true;
        }
        head_def= head_def->next;
    }
    return false;
}

int main()
{
    node *head = NULL;
    // push function is for inserting a node in beginning
    push(&head, 5);
    push(&head, 9);
    insertAfter(head, 2);
    append(&head, 0);
    append(&head, -1);

    print(head);
    cout<< search(head, 3);
    return 0;
}