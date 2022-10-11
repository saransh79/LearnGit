#include<stdio.h>
int main()
{
    int a[50];
    int i,j,size,num,pos;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    printf("Enter the position \n");
    scanf("%d",&pos);
    printf("Enter the number to be inserted\n");
    scanf("%d",&num);
    printf("Enter the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    if(pos<=0 || pos>size+1)
    {
        printf("not valid /n");
    }
    else
    {
        for(i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;
    }
    printf("new array\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;

}