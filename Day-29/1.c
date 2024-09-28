#include<stdio.h>
#include<string.h>
void main()
{
    FILE *p;
    char msg[50]="Goodbye ! C";
    p=fopen("hello.txt","w");

    if(p!=NULL)
    {
        printf("File has been Created\n");
    }
    else
    {
        printf("File has not Created\n");
    }
    while(msg!=NULL)
    {
        fputs(msg,p);
        break;
    }
    fclose(p);

}