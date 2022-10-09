#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
};
int isempty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    return 0;
}
int isfull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    return 0;
}
void push(struct stack *ptr,char val){
    if(isfull(ptr)){
        printf("Stack is overflow");
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
char pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top=ptr->top-1;
        return val;
    }
}
int match(char a,char b){
    if(a=='{' && b=='}'){
        return 1;
    }
    if(a=='(' && b==')'){
        return 1;
    }
    if(a=='[' && b==']'){
        return 1;
    }
    return 0;
}
int parenthesis(char *exp){
    struct stack *sp;
    sp->size=30;
    sp->top=-1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    int i;
    char pop_ch;
    for(i=0;exp[i]!='\0';i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
            push(sp, exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){
            if(isempty(sp)){
                return 0;
            }
            pop_ch = pop(sp);
            if(match(pop_ch,exp[i])){
                return 1;
            }
        }
        
    }
    if(isempty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char *exp="[2*6{201-36(29)}85]";
    if(parenthesis(exp)){
        printf("The parenthesis is balanced");
    }
    else{
        printf("The parenthesis is not balanced");
    }
    return 0;
}