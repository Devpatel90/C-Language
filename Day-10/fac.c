#include <stdio.h>

void main() 
{
    int num,fac=1,i=1;

    printf("Enter any Number: ");
    scanf("%d", &num);

    while (i<=num) {
        fac *= i;
        i++;
    }
    printf("The Factorial of %d is: %d\n", num, fac);
}
