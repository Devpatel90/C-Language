#include<stdio.h>
void main()
{
	int a,b,c,d,e;

	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("Enter Second Number: ");
	scanf("%d",&b);
	printf("Enter Third Number: ");
	scanf("%d",&c);
	printf("Enter Fourth Number: ");
	scanf("%d",&d);
	printf("Enter Fifth Number: ");
	scanf("%d",&e);

	if (a>b)
	{
		if (a>c && a>d && a>e)
		{
			printf("First Number is Maximum.. ");
		}
		else if (a>d && a>e)
		{
			printf("Fourth Number is Maximum.. ");
		}
		else
		{
			printf("Fifth Number is Maximum.. ");
		}
	}

	else if (b>c)
	{
		if (b>d && b>e)
		{
			printf("Second Number is Maximum.. ");
		}
		else if (b>e)
		{
			printf("Fifth Number is Maximum.. ");
		}
		else
		{
			printf("Fourth Number is Maximum.. ");
		}
	}

	else if (c>d)
	{
		if (c>e)
		{
			printf("Third Number is Maximum.. ");
		}
		else
		{
			printf("Fifth Number is Maximum.. ");
		}
	}

	else if (d>e)
	{
			printf("Fourth Number is Maximum.. ");
	}
	else
	{
			printf("Fifth Number is Maximum.. ");
	}
}