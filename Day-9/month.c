#include<stdio.h>
void main()
{
	int month;

	printf("Enter The Number of Month ");
	scanf("%d",&month);

	switch(month)
	{
	case 1:
		printf("This is January");
		break;
	case 2:
		printf("This is February");
		break;
	case 3:
		printf("This is March");
		break;
	case 4:
		printf("This is April");
		break;
	case 5:
		printf("This is May");
		break;
	case 6:
		printf("This is June");
		break;
	case 7:
		printf("This is July");
		break;
	case 8:
		printf("This is August");
		break;
	case 9:
		printf("This is September");
		break;
	case 10:
		printf("This is October");
		break;
	case 11:
		printf("This is November");
		break;
	case 12:
		printf("This is December");
		break;
	}
}