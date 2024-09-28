#include<stdio.h>
#include<conio.h>

void rev();

void main()
{
    rev();
}

void rev()
{

    int a[5] = {12,2,5,7,10};
    int sum=0;

    printf("Reverse array is :-\n");

    for(int i=4;i>=0;i--)
    {
        printf(" %d\n",a[i]);
    }

    for(int i=0;i<5;i++)
    {
        sum += a[i];
    }

    printf("sum of array is : %d\n",sum);

}