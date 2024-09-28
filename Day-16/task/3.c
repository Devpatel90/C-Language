#include<stdio.h>
void main()
{
	float a[10],j,avg,sum=0;
	int i;

	printf("Enter the size of Array= ");
	scanf("%f",&j);

	for(i=0;i<j;i++)
	{	
		printf("Enter The value of a=");
		scanf("%f",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
		avg=sum/j;
		printf("The Average  of array is=%f\n",avg);
}