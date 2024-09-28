#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int a,b,c;
    printf("Enter The value of a:- ");
    scanf("%d",&a);
    printf("Enter The value of b:- ");
    scanf("%d",&b);

    c=a+b;

    printf("Sum is:- %d",c);
    
}