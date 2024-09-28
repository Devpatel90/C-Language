#include<stdio.h>
void main()
{
    int i=1,num;

    printf("Enter Number:- ");
    scanf("%d",&num);

    while(i<=num)
    {
        printf("%d\n",i);
        i++;
    }
}