#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];

    printf("Enter Your Name in Uppercase:- ");

    gets(a);

    puts(a);

    printf("Your Name in Lowercase is:- %s",strlwr(a));


}