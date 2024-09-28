#include<stdio.h>
void main()
{
	int a[10],j,i,length=0;

	printf("Enter the Size of Array= ");
	scanf("%d",&j);

	for(i=0;i<j;i++)
	{	
		printf("Enter The value of a=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<j;i++)
	{
		length++;
	}

		printf("The Length of array is=%d\n",length);
}