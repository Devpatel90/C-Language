#include <stdio.h>
void main() 
{
    int i, num = 0;

    printf("Enter a Number: ");
    scanf("%d", &i);

    while (i!=0) {
        i =i/10;
        num++;
    }
    printf("Number of digit:- %d\n", num);
}
    