#include<stdio.h>
void main()
{
    FILE *p;
    p=fopen("hello.txt","w");

    if(p!=NULL)
    {
        printf("File has been Created ");
    }
    else
    {
        printf("File has not Created");
    }
    fclose(p);

}