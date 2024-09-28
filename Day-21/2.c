#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char a[50];
    char b[50];
    int len,i;

    printf("Enter String:- ");
    gets(a);

    len=strlen(a);
    printf("Length of String is:- %d\n",len);
    int n;
    for(i=0;i<len;i++)
    {
        if(a[0] == a[len-1])
        {
            n=0;
        }   
        else
        {
            n=1;
        }
    }

    if(n==0)
    {
        printf("It is Palindrome");
    }
    else
    {
        printf("It is Not palindrome");
    }
}