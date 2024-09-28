#include<stdio.h>
int cal(int x,int y,char z);
void main()
{
    char o;
    int a,b,c;

    printf("Enter operation that you have to perform  (+,-,*,/) :-");
    scanf("%c",&o);

    printf("Enter First No. :- ");
    scanf("%d",&a);

    printf("Enter Second No. :- ");
    scanf("%d",&b);

    c=cal(a,b,o);

    printf("The Answer is:- %d",c);
}
int cal(int x,int y,char z)
{

    switch(z)
    {
        case '+':
        return x+y;
        break;

        case '-':
        return x-y;
        break;

        case '*':
        return x*y;
        break;

        case '/':
        return x/y;
        break;
    }
    
}