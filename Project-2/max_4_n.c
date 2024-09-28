#include<stdio.h>
void main()
{
	
	int a,b,c,d;

	printf("Enter the First number : ");	
	scanf("%d",&a);

	printf("Enter the second number : ");	
	scanf("%d",&b);

	printf("Enter the third number : ");	
	scanf("%d",&c);

	printf("Enter the fourth number : ");	
	scanf("%d",&d);

	if(a>b)
	{
		if(a>c && a>d)
		{
			printf("The Maximum No. is %d\n",a);
		}
		else if(c>d)
		{
			printf("The Maximum No. is %d\n",c);
		}
		else
		{
			printf("The Maximum No. is %d\n",d);
		}
	}
	else if(b>c)
	{
		if(b>c && b>d)
		{
			printf("The Maximum No. is %d\n",b);
		}
		else if(c>d)
		{
			printf("The Maximum No. is %d\n",c);
		}
		else
		{
			printf("The Maximum No. is %d\n",d);
		}
	}
	else if(c>d)
	{
		printf("The Maximum No. is %d\n",c);
	}
	else
	{
		printf("The Maximum No. is %d\n",d);
	}


}
