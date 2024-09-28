#include<stdio.h>
#include<conio.h>

void sum();

void main()
{
    sum();
}

void sum()
{

    int a[5] = {1,2,3,4,5};
    int sum=0;

    for(int i=0;i<5;i++)
    {
        sum += a[i];
    }

    printf("sum of array is : %d",sum);

}