#include <stdio.h>
void main() 
{
    int num,sum=0,i;

    printf("Enter any Number: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++)
    {
        sum = sum + i;
    }
    printf("The sum from 1 to %d is: %d\n",num,sum);
}
