#include<stdio.h>
void main()
{
    char ch='a';

    do
    {
        printf("%c\n",ch);
        ch++;
    }
    while(ch<='z');
}