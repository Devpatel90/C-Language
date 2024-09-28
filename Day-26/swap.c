#include<stdio.h>
void swap(int *x,int *y);
void main()
{
    int a,b;

    printf("Enter the First Value:- ");
    scanf("%d",&a);

    printf("Enter the Second Value:- ");
    scanf("%d",&b);
    
    swap(&a,&b);
}
void swap(int *x,int *y)
{
    int z;

    z=*x;
    *x=*y;
    *y=z;

    printf("New Value of a After Swapping:- %d\n",*x);
    printf("New Value of b After Swapping:- %d\n",*y);
}