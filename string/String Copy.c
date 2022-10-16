//String COPY 

#include<stdio.h>
#include<conio.h>
void main()     
{
 char sm[20],sc[20];
 int i;
 printf("Enter a String: ");
 gets(sm);
 for(i=0;sm[i]!='\0';i++)
    sc[i]=sm[i];
   sc[i]='\0';
 printf("Copied String: %s",sc);
}

