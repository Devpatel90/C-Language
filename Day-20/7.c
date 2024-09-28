#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];

    printf("Enter Your Name:- ");

    gets(a);

    puts(a);

    printf("%s",strchr(a,'e'));


}