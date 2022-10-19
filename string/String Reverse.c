// String REVERSE

#include<stdio.h>
#include<conio.h>
void main()       
{
 char s[20],temp;
 int i,j,len=0;
 printf("Enter a String: ");
 gets(s);
 for(i=0;s[i]!='\0';i++)
    len++;
 for(i=0,j=len-1;i<j;i++,j--)
 {
  temp=s[i];
  s[i]=s[j];
  s[j]=temp;
 }
 printf("Reversed String: %s",s);
}
