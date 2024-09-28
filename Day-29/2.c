#include<stdio.h>
#include<string.h>
void main()
{
    FILE *p;
    char msg[50];
    p=fopen("hello.txt","r");

    if(p!=NULL)
    {
        printf("File has been Created\n");
    }
    else
    {
        printf("File has not Created\n");
    }
    while(fgets(msg,50,p))
    {
        printf("Your Message is:- %s",msg);
    }
    fclose(p);

}