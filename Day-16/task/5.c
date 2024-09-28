#include<stdio.h>
void main()
{
    int s1,s2,i,sum=0,merge;

    printf("Enter size of First Array :- ");
    scanf("%d",&s1);
    
    int a[s1];

    printf("Enter the Number of First Array :- ");
    for(i=0;i<s1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter size of Second Array :- ");
    scanf("%d",&s2);
    
    int b[s2];

    printf("Enter the Number of Second Array :- ");
    for(i=0;i<s2;i++)
    {
        scanf("%d",&b[i]);
    }

    merge = s1 + s2;
    int merge_array[merge];

    for(i=0;i<s1;i++)
    {
        merge_array[i] = a[i];
    }

    for(i=0;i<s2;i++)
    {
        merge_array[i + s1] = b[i];
    }

    for(i=0;i<merge;i++)
    {
        printf("After Merging[%d] = [%d]\n",i,merge_array[i]);
    }

}