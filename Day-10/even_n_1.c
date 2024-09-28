#include<stdio.h>
void main()
{
    int i=1,num;

    printf("Enter Number:- ");
    scanf("%d",&num);

    while(num>=1)
    {
        if (num%2==0)
        {
            printf("%d\n",num);
        }
        num--;
    }
}