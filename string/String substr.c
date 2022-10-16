// String SUBSTRING

#include<stdio.h>
#include<conio.h>
void main()        
{
 char sm[20],sb[20];
 int i,sp,n,len=0;
 printf("Enter a String: ");
 gets(sm);
 printf("Enter Starting Point: ");
 scanf("%d",&sp);
 printf("Enter Number of Characters: ");
 scanf("%d",&n);
 sp=sp-1;
 i=0;
 while(n>0)
 {
  sb[i]=sm[sp];
  i++;
  sp++;
  n--;
 }
 sb[i]='\0';
 printf("Sub-String: %s",sb);
}
