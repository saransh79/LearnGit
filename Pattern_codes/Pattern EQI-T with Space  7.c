#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,k=0,rows,s;
   printf("Enter How many rows to print: ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
     if(rows%2==0)
      {
       if(i<=rows/2)
            k++;
       if(i>rows/2+1)
            k--;
      }
      else
        i<=(rows+1)/2?k++:k--;
       if(i%2==0)
        s=0;
     for(j=1;j<=rows*2-1;j++)
     {
      if(j<=k &&s){
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


