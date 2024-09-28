#include<stdio.h>
void main()
{
    int s1,s2,a[s1][s2],i,j;

    printf("Enter Row:- ");
    scanf("%d",&s1);

    printf("Enter Column:- ");
    scanf("%d",&s2);

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
            if(a[i][j] < 0)
            {   
                printf("%d",a[i][j]);
            }
        }
        // printf("\n");
    }
}