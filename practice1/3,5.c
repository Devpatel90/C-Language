#include<stdio.h>
void main()
{
    int num;
    printf("Enter Your Number:- ");
    scanf("%d",&num);

    if(num % 3 == 0 && num % 5 == 0)
    {
        printf("Number is Divisible by 3 and 5");
    }
    else
    {
        printf("Number is not Divisible by 3 and 5");
    }
}