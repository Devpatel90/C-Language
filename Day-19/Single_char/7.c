#include<stdio.h>
#include<ctype.h>
void main()
{
    char a='n';

    printf("%c\n",a);

    int b=toascii(a);
    printf("%d",b);
}