#include<stdio.h>
void main()
{
    int i,num;

    printf("Enter Number:- ");
    scanf("%d",&num);

    for(i=1;num>=1;num--)
    {
        printf("%d\n",num);
    }
}