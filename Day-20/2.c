#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];

    printf("Enter Your Name in Lowercase:- ");

    gets(a);

    puts(a);

    printf("Your Name in Uppercase is:- %s",strupr(a));


}