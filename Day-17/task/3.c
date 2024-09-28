#include<stdio.h>
void main()
{
    int a[2][2],i,j;
    float avg=0,sum=0;

    printf("Enter Value of a:- \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum+=a[i][j];
            avg=sum/4;
        }
    }
            printf("Average is:- %.2f",avg);
}