#include<stdio.h>
void main()
{
	int a;

	printf("Enter Any Number:- ");
	scanf("%d",&a);

	if (a%2==0)
	{
		printf("This Number is Even");
	}
	else
	{
		printf("This Number is Odd");
	}
}