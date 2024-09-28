#include<stdio.h>
void cube();
void main()
{
    cube();
}
void cube()
{
    int a,b;
    printf("Enter The Value:- ");
    scanf("%d",&a);

    b=a*a*a;

    printf("Cube of %d is:-%d ",a,b);
}