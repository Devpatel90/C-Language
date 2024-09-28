// write a c program that uses pointers to find the sum of two 1d arrays...

#include<stdio.h>
void main()
{
    int a1[4] = {2,5,7,3};
    int a2[4] = {6,12,20,17};
    int *p1=a1, *p2=a2;

    printf("\nfirst array is : ");
    for(int i=0;i<4;i++)
    { 
        printf("%d ",*(p1+i)); 
    }

    printf("\nsecond array is : ");
    for(int i=0;i<4;i++)
    { 
        printf("%d ",*(p2+i)); 
    }

    printf("\n\nsum of two 1d array is : ");
    for(int i=0;i<4;i++)
    { 
        printf("%d ",*(p1+i) + *(p2+i)); 
    }



}