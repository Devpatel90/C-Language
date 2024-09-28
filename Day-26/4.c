#include<stdio.h>
void main()
{
    char c[50];

    printf("Enter Your Name :- ");
    gets(c);

    printf("Your name is :- %s",c);

    int len=0;
    int *p;

    while(c[len]!='\0')
    {
        len++;
    }

    p=&len;

    printf("length of String is : %d\n",*p);

}