#include<stdio.h>
void main()
{
	int a,b,c,d,e;

	printf("Enter First Number:- ");
	scanf("%d",&a);
	printf("Enter Second Number:- ");
	scanf("%d",&b);
	printf("Enter Third Number:- ");
	scanf("%d",&c);
	printf("Enter Fourth Number:- ");
	scanf("%d",&d);
	printf("Enter Fifth Number:- ");
	scanf("%d",&e);

	if(a>b && a>c && a>d && a>e)
	{
		printf("First No. is Maximum");
	}
	else if(b>c && b>d && b>e)
	{
		printf("Second No. is Maximum");
	}
	else if(c>d && c>e)
	{
		printf("Third No. is Maximum");
	}
	else if(d>e)
	{
		printf("Fourth No. is Maximum");
	}
	else
	{
		printf("Fifth No. is Maximum");
	}
}