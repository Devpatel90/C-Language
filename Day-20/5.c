#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    char b[50];

    printf("Enter Your First Name:- ");

    gets(a);

    puts(a);

    
    printf("Enter Your Last Name:- ");

    gets(b);

    puts(b);

    printf("Your Full Name is:- %s",strcat(a,b));


}