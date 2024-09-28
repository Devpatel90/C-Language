#include <stdio.h>
void main() 
{
    int num,sum=0,i=1;

    printf("Enter any Number: ");
    scanf("%d", &num);

    while (i<=num) 
    {
        sum += i;
        i++;
    }
        printf("The sum from 1 to %d is: %d\n",num,sum);
}
