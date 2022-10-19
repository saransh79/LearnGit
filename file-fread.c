#include<stdio.h>
#include<stdlib.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
int main()
{
    struct book b;
    FILE *fp;
    fp=fopen("f2.txt","rb");
    if(fp==NULL)
    {
        printf("file cannot open");
        exit(1);
    }
    while(fread(&b,sizeof(b),1,fp)>0)
    {
        printf("%d %s %f",b.bookid,b.title,b.price);
    }
     fclose(fp);
getch();
}
