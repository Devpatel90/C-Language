#include<stdio.h>
void main()
{
	char week;

	printf("Choose your Week:-");
	scanf("%c",&week);	

	switch(week)
	{
	case 'M':
		printf("You Have Choosed Monday..");
		break;
	case 'T':
		printf("You Have Choosed Tuesday..");
		break;
	case 'W':
		printf("You Have Choosed Wednesday..");
		break;
	case 't':
		printf("You Have Choosed Thursday..");
		break;
	case 'F':
		printf("You Have Choosed Friday..");
		break;
	case 's':
		printf("You Have Choosed Saturday..");
		break;
	case 'S':
		printf("You Have Choosed Sunday..");
		break;
	}
}