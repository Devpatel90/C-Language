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

    printf("Enter Elements of a:- ");
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {   
            scanf("%d",&a[i][j]);
        }
    }

    printf("Elements of a are:- \n");
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }   

    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            sum = sum + a[i][j];
        }
        printf("sum of row-wise elements : %d\t",sum);
        printf("\n");
        sum=0;
    }   
}