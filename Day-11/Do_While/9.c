#include <stdio.h>

void main() 
{
    int num,fac=1,i=1;

    printf("Enter any Number: ");
    scanf("%d", &num);

    do
    {
        fac *= i;
        i++;
    }
    while (i<=num);
    printf("The Factorial of %d is: %d\n", num, fac);
}
