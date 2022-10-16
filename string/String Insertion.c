// String INSERTION

#include<stdio.h>
#include<conio.h>
void main()       
{
 char s1[20],s2[20],s3[40];
 int len1,len2,len3,pos;
 printf("Enter a String: ");
 gets(s1);
 printf("Enter a String to Insert: ");
 gets(s2);
 printf("Enter Starting point to insert: ");
 scanf("%d",&pos);
 len1=0;
 len3=0;
 while(len1<pos)
 {
  s3[len3]=s1[len1];
  len1++;
  len3++;
 }
 len2=0;
 while(s2[len2]!='\0')
 {
  s3[len3]=s2[len2];
  len2++;
  len3++;
 }
 while(s1[len1]!='\0')
 {
  s3[len3]=s1[len1];
  len1++;
  len3++;
 }
 s3[len3]='\0';
 printf("Inserted String: %s",s3);
}
