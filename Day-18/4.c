#include<stdio.h>
void main()
{
    int s1,s2,i,j;
    int sum=0;

    printf("Enter Row:- ");
    scanf("%d",&s1);

    printf("Enter Column:- ");
    scanf("%d",&s2);

    int a[s1][s2];

    printf("Enter Elements of Array:- \t");
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {   
            scanf("%d",&a[i][j]);
        }
    }

    printf("Elements of Array are:- \n");
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    printf("Elements of Array in Transpose:- \n");
    for(j=0;j<s2;j++)
    {
        for(i=0;i<s1;i++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}