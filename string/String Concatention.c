// String CONCATENATION
#include<stdio.h>
#include<conio.h>
void main()            
{
 char s1[20],s2[20],s3[40];
 int i,k;
 printf("Enter a String 1: ");
 gets(s1);
 printf("Emter a String 2: ");
 gets(s2);
 k=0;
 for(i=0;s1[i]!='\0';i++,k++)
  {
   s3[k]=s1[i];
  }
 for(i=0;s2[i]!='\0';i++,k++)
  {
   s3[k]=s2[i];
  }
  s3[k]='\0';
 printf("Concatenated String: %s",s3);
}

