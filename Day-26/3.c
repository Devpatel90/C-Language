#include<stdio.h>
void main()
{
    int size;

    printf("Enter the size of array : ");
    scanf("%d",&size);

    int a[size], new[size];
    int *p;
    p=&new;

    printf("\nEnter the value of array : ");

    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nValue of array is : \n");
    for(int i=0;i<size;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    for(int i=0;i<size;i++)
    {
        new[i] = a[size-i-1]; 
    }

    printf("\nValue of reverse array is : \n");
    for(int i=0;i<size;i++)
    {
        printf("a[%d] = %d\n",i,*(p+i));
    }
}