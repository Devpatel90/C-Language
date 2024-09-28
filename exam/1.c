#include<stdio.h>
void main()
{
    char o;
    int a,b;

    printf("Enter operation that you have to perform  (+,-,*,/) :-");
    scanf("%c",&o);

    printf("Enter First No. :- ");
    scanf("%d",&a);

    printf("Enter Second No. :- ");
    scanf("%d",&b);
    
    switch(o)
    {
        case '+':
        printf("Sum of Two Number is:- %d + %d = %d\n",a,b,a+b);
        break;

        case '-':
        printf("Substraction of Two Number is:- %d - %d = %d\n",a,b,a-b);
        break;

        case '*':
        printf("Multiplication of Two Number is:- %d * %d = %d\n",a,b,a*b);
        break;

        case '/':
        printf("Division of Two Number is:- %d / %d = %d\n",a,b,a/b);
        break;

        default:
        printf("Invalid input.....!\n");
        break;
    }
}

