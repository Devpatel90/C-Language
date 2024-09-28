#include<stdio.h>
void main()
{
    int a[5];
    int i;
    int *p;
    p=&a;

    printf("Enter The Value of a= ");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The Value of a= ");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("The Address of a= %d\n",p+i);
    }

}