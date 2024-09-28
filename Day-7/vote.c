#include<stdio.h>
void main()
{
	int age;

	printf("Enter Your Age:- ");
	scanf("%d",&age);

	if (age>=18)
	{
		printf("You can Vote");
	}
	else
	{
		printf("You can't Vote");
	}
}
