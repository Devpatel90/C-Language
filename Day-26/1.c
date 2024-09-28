#include<stdio.h>
void main()
{
    int a,b,z;

    printf("Enter the First Value:- ");
    scanf("%d",&a);

    printf("Enter the Second Value:- ");
    scanf("%d",&b);
    
    int *p1=&a,*p2=&b;

    z=*p1;
    *p1=*p2;
    *p2=z;

    printf("New Value of a After Swapping:- %d\n",*p1);
    printf("New Value of b After Swapping:- %d\n",*p2);
}
 
