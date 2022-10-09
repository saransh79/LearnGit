#include <bits/stdc++.h>
//#include<cstring>
#include "node.cpp"
using namespace std;
#define lcm(a,b) (a*b)/(__gcd(a,b))
#define ll long long 
//Given a string, find and print all the possible permutations of the input string.


Node *takeInput(){
  int data;
  cin>>data;
  Node *head=NULL;
  while(data!=-1){
    Node *newNode=new Node(data);
    if(head==NULL){
      head=newNode;
    }else{
      Node *temp=head;
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=newNode;
    }
    cin>>data;
  }
  return head;
}


Node * insertNode(Node* head, int i , int data){
  Node* newNode=new Node(data);
  int count=0;
  Node* temp=head;
  if(i==0){
    newNode->next=head;
    head=newNode;
    return head;
  }
  while(temp!=NULL && count<i-1){
    temp=temp->next;
    count++;
  }
  if(temp!=NULL){
    Node*a=temp->next;
    temp->next=newNode;
    newNode->next=a;
  }
  return head;
}
Node * deleteNode(Node*head, int i){
  int count=0;
  Node* temp=head;
  if(i==0){
    head=head->next;
    return head;
  }
  while(temp!=NULL && count<i-1){
    temp=temp->next;
    count++;
  }
    Node *a=temp->next;

  if(temp!=NULL && a!=NULL){
    Node *b=a->next;
    temp->next=b;
    delete a;
  }
  return head;
}

void print(Node *head){
  Node *temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  // cout<<temp->data;
  cout<<endl;
}


int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  
  // Node n1(1);
  // Node *head=&n1;
  // Node n2(2);
  // Node n3(3);
  // Node n4(4);

  // n1.next=&n2;
  // n2.next=&n3;
  // n3.next=&n4;
  Node *head=takeInput();
  int i;int data;
  cin>>i>>data;
  head=deleteNode(head,i);
  print(head);

  return 0;
}