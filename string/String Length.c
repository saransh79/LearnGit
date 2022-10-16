// String LENGHT
#include<stdio.h>
#include<conio.h>
void main()            
{
 char s[50];
 int i,len=0;
 printf("Enter a String: ");
 gets(s);
 for(i=0;s[i]!='\0';i++)
    len++;
 printf("Length of String: %d",len);
}
