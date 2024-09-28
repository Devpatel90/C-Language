#include<stdio.h>
void main()
{
    //File Creation Process
    FILE *p;
    p=fopen("hello.txt","w");

    if(p!=NULL)
    {
        printf("File has been Created\n");
    }
    else
    {
        printf("File has not Created\n");
    }
    fclose(p);

    //File Write Process

    FILE *pt;
    char message[50]="Hello C Language , Welcome To C Language";
    pt=fopen("hello.txt","w");

    if(p!=NULL)
    {
        printf("File has been Opened\n");
    }
    else
    {
        printf("File has not Opened\n");
    }
    while(message!=NULL)
    {
        fputs(message,pt);
        break;
    }
    fclose(pt);

    //File Read Process

    FILE *ptr;
    char msg[50];
    ptr=fopen("hello.txt","r");

    if(p!=NULL)
    {
        printf("File has been Opened\n");
    }
    else
    {
        printf("File has not Opened\n");
    }
    while(fgets(msg,50,ptr))
    {
        printf("Your Message is:- %s",msg);
    }
    fclose(ptr);

}