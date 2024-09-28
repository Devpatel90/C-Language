#include<stdio.h>
void cal(int x,int y,char z);
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

    cal(a,b,o);
}
void cal(int x,int y,char z)
{

    switch(z)
    {
        case '+':
        printf("%d + %d = %d",x,y,x+y);
        break;

        case '-':
        printf("%d - %d = %d",x,y,x-y);
        break;

        case '*':
        printf("%d * %d = %d",x,y,x*y);
        break;

        case '/':
        printf("%d / %d = %d",x,y,x/y);
        break;

        default:
        printf("Operator is incorrect !");

    }
    
}