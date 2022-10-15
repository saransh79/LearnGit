#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k=0,n;
 printf("Enter Number of Rows: ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  i<=(n/2+1)?k++:k--;
  for(j=1;j<=n;j++)
  {
   if(j<=(n/2+2)-k || j>=(n/2)+k)
     printf("*");
   else
     printf(" ");
  }
  printf("\n");
 }
}


