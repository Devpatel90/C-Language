#include<stdio.h>
void main()
{
    int a[] = {1,6,9,14,5,90};
    int new[6];

    for(int i=0;i<6;i++)
    {
        new[i]=a[5-i];
    }

    for(int i=0;i<6;i++)
    {
        printf("new[%d] = %d\n",i,new[i]);
    }
}