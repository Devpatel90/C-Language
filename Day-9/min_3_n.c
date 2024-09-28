#include<stdio.h>

void main()
{
	int a,b,c;

	printf("Enter the First number :- ");
	scanf("%d", &a);

	printf("Enter the Second number :- ");
	scanf("%d", &b);

	printf("Enter the Third number :- ");
	scanf("%d", &c);

	if(a<b)
	{
		if(a<c)
		{
			printf("This is Minimum...%d\n",a);
		}
		else
		{
			printf("This is Minimum...%d\n",c);
		}
	}
	else if(b<c)
	{
			printf("This is Minmum...%d\n",b);
	}
	else
	{
			printf("This is Minmum...%d\n",c);
	}
}