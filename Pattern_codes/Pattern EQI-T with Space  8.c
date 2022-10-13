#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,n,k=0,s;
   printf("Enter a Number of Rows: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    if(n%2==0)
     {
      if(i<=n/2)
        k++;
      if(i>n/2+1)
        k--;
     }
     else
    i<=(n/2+1)?k++:k--;
    s=1;
     for(j=1;j<=(n/2+1);j++)
     {
      if(j>=(n/2+2)-k &&s){
        printf("*");
        s=0;
      }
      else{
        printf(" ");
        s=1;
      }
     }
   printf("\n");
   }
 getch();
}

