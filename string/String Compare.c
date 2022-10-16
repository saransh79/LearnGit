// String COMPARITION

#include<stdio.h>
#include<conio.h>
void main()   
{
 char s1[20],s2[20];
 int i,len1=//String COMPARITION0,len2=0,flag;
 printf("Enter String 1: ");
 gets(s1);
 printf("Enter String 2: ");
 gets(s2);
 for(len1=0;s1[len1]!='\0';len1++);
 for(len2=0;s2[len2]!='\0';len2++);
 if(len1>len2)
   printf("String 1 is Greater.");
 else if(len2>len1)
   printf("String 2 is Greater.");
 else
  {
   flag=0;
   for(i=0;i<len1;i++)
   {
    if(s1[i]>s2[i])
     flag=1;
    else if(//String COMPARITIONs2[i]>s1[i])
     flag=2;
   }
   if(flag==0)
    printf("String1 and String2 are Equal.");
   else if(flag==1)
    printf("String 1 is Greater.");
   else
    printf("String 2 is Greater.");
  }
}
