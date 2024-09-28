#include<stdio.h>
#include<conio.h>
void main()
{
    int a[4] = {1,2,3,4};
    int *ptr = a;

    printf("Cube of array :-\n");

    for(int i=0;i<4;i++)
    {
        printf("%d",*(ptr+i) * *(ptr+i) * *(ptr+i));
    }

}