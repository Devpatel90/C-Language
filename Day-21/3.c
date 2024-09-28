#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char a[50];
    char b[50];
    int c=0,len,i;

    printf("Enter String:- ");
    gets(a);

    len=strlen(a);
    // printf("Length of String is:- %d\n",len);

    for(i=0;i<len;i++)
    {
        if(a[i] != ' ')
        {
            b[c]=a[i];
            c++;
        }
    }
    printf("%s",b);

}