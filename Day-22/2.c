#include<stdio.h>
void sum(int x,int y);
void main()
{
    int a,b;
    printf("Enter The value of a:- ");
    scanf("%d",&a);
    printf("Enter The value of b:- ");
    scanf("%d",&b);

    sum(a,b);
}
void sum(int x,int y)
{
    int z;
    z=x+y;
    printf("Sum is:- %d",z);
    
}