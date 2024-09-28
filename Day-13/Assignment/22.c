#include<stdio.h>
void main()
{
    char i,j,c='A';

    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
}