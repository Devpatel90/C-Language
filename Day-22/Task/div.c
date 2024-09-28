#include<stdio.h>
void divisible();
void main()
{
    divisible();
}
void divisible()
{
    int number;

    printf("Enter The Number :- ");
    scanf("%d",&number);

    if((number%3==0) && (number%5==0))
    {
        printf("Yes %d is Divisible by 3 and 5 Both\n",number);
    }
    else
    {
        printf("No %d is Not Divisible by 3 and 5\n",number);
    }
}