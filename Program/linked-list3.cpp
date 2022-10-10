// Deleting a node from LL by element
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
// Inserting node
void push(node **head_def, int new_data)
{
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = *head_def;
    *head_def = new_node;
}
// element is to be deleted from LL
void deleteNode(node **head_ref, int element)
{
    node *temp = *head_ref;
    node *prev = NULL;
    if (temp == NULL)
    {
        cout << "Linked list is empty";
    }
    if (temp != NULL && temp->data == element)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }
    else
    {
        while (temp != NULL && temp->data != element)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
        {
            return;
        }
        prev->next = temp->next;
        delete temp;
    }
}

void display(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
int main()
{
    node *head = NULL;
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);

    deleteNode(&head, 5);
    display(head);
    return 0;
}