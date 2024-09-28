#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int b;

    printf("Enter Your Full Name:- ");

    gets(a);

    puts(a);

    b=strlen(a);
    printf("Length of Your Name is:- %d",b);


}