#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *Next;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->Next=NULL;
    last=first;
    for(i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->Next=NULL;
        last->Next=t;
        last=t;
    }
}
void Display(struct Node *p){
    while(p){
        printf("%d ",p->data);
        p=p->Next;
    }
}
int deleteNumber(struct Node *p,int index,int n){
    struct Node *q;
    int x=-1;
    if(index<1 || index>n)
    return -1;
    if(index==1){
        q=first;
        x=first->data;
        first=first->Next;
        free(q);
        return x;
    }
    else{
        for(int i=0;i<index-1;i++){
            q=p;
            p=p->Next;
        }
        q->Next=p->Next;
        x=p->data;
        free(p);
        return x;
        
    }
}
int main()
{
    int n;
    printf("enter the length of the list\n");
    scanf("%d",&n);
    int A[10];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    create(A,n);
    Display(first);
    printf("\n");
    int index;
    printf("Enter the index where you want to be delete\n");
    scanf("%d",&index);
    deleteNumber(first,index,n);
    Display(first);

    return 0;
}
