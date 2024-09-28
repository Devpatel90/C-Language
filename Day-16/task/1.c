#include<stdio.h>
void main()
{
    int size,i;

    printf("Enter Size of array:- ");
    scanf("%d",&size);

    int a[size];

    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Value Of a:- ");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}