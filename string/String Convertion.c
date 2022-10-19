// String CONVERTION 
#include<stdio.h>
#include<conio.h>
void main()        
{
 char s[20];
 int i;
 printf("Enter a String: ");
 gets(s);
 for(i=0;s[i]!='\0';i++)
  {
   if(s[i]>=65 && s[i]<=90)
      s[i]=s[i]+32;
   else if(s[i]>=97 && s[i]<=122)
      s[i]=s[i]-32;
  }
  printf("Converted String: %s",s);
}

