#include<stdio.h>
void swap();
void main()
{
    swap();
}
void swap()
{
    int a,b,c;

    printf("Enter the First Number :- ");
    scanf("%d",&a);

    printf("Enter the Second Number :- ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("After Swapping of First No :- %d\n",a);
    printf("After Swapping of Second No :- %d\n",b);
}