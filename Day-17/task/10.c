#include<stdio.h>
void main()
{
    int a[5][5],i,j,sum=0;

    printf("Enter Elements of a:- ");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {   
            scanf("%d",&a[i][j]);
        }
    }

    printf("Elements of a are:- \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d\t    ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==1 && j==1 || i==1 && j==2 || i==1 && j==3 || i==2 && j==1 || i==2 && j==2 || i==2 && j==3 || i==3 && j==1 || i==3 && j==2 || i==3 && j==3)
            {
                continue;
            }
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("Total Sum:- %d",sum);
}