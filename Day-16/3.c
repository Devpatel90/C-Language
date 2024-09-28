#include<stdio.h>
void main()
{
    int a[5],b[5],i;

    printf("Enter Value Of a:- ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter Value Of b:- ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Value Of a:- ");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

    printf("Value Of b:- ");
    for(i=0;i<5;i++)
    {
        printf("%d\n",b[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("a[%d] + b[%d] =%d\n",a[i],b[i],a[i]+b[i]);
    }
}