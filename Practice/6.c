#include<stdio.h>
void main()
{
    int size1, size2;
    printf("Enter the size of first array : ");
    scanf("%d",&size1);

    int a[size1];


    for(int i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the size of second array : ");
    scanf("%d",&size2);

    int b[size2];


    for(int i=0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Value Of A Elements:- \n");

    for(int i=0;i<size1;i++)
    {
        printf("a[%d] = %d\n",i,a[i]);
    }

    printf("Value Of B Elements:- \n");

    for(int i=0;i<size2;i++)
    {
        printf("b[%d] = %d\n",i,b[i]);
    }

    printf("Merge Array:- \n");

    int merge_size = size1 + size2;

    int merge_array[merge_size];

    for(int i=0;i<size1;i++)
    {
        merge_array[i] = a[i];
        merge_array[i+size1] = b[i];
    }

    for(int i=0;i<merge_size;i++)
    {
        printf("m[%d] = %d\n",i,merge_array[i]);
    }

}