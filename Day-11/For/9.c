#include <stdio.h>

void main() 
{
    int num,fac=1,i;

    printf("Enter any Number: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        fac *= i;
    }
    printf("The Factorial of %d is: %d\n", num, fac);
}
