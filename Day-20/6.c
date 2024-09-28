#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    char b[50];
    int c;

    printf("Enter Your First Name:- ");

    gets(a);

    puts(a);

    
    printf("Enter Your Second Name:- ");

    gets(b);

    puts(b);

    c=strcmp(a,b);
    printf("Comparing your Name:- %d",c);


}