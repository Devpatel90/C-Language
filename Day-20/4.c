#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    char nick[50];

    printf("Enter Your Full Name:- ");

    gets(a);

    puts(a);


    printf("Your Name is:- %s",strcpy(nick,a));


}