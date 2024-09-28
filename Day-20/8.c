#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    char b;
    printf("Enter Any Sentence:- ");

    gets(a);

    puts(a);

    b=strstr(a,"dev");

    printf("%s",b);


}