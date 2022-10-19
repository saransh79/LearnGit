// String PALINDROME

#include<stdio.h>
#include<conio.h>
void main()      
{
 char s[20],temp;
 int i,j,len=0,flag=0;
 printf("Enter a String: ");
 gets(s);
 for(i=0;s[i]!='\0';i++)
    len++;
 for(i=0,j=len-1;i<j;i++,j--)
 {
  if(s[i]==s[j])
    flag++;
 }
 if(flag==len/2)
   printf("String is Palindrome.");
 else
   printf("String is Not Palindrome.");
}

