#include<stdio.h>
void main()
{
    int i,j,k;

    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    for(i=2;i<=5;i++)
    {
        for(j=2;j<=i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=5;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}