#include<stdio.h>
void main()
{
int i,j,k;
    for(i=4;i>=0;i--)
    {
        for(k=i;k>0;k--)
        {
            printf(" ");
        }
        for(j=i;j<=4;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}