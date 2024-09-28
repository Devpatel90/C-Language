#include<stdio.h>
void main()
{
	
	int a,b,c,d,e;

	printf("Enter the First number : ");	
	scanf("%d",&a);

	printf("Enter the Second number : ");	
	scanf("%d",&b);

	printf("Enter the Third number : ");	
	scanf("%d",&c);

	printf("Enter the Fourth number : ");	
	scanf("%d",&d);

	printf("Enter the Fifth number : ");	
	scanf("%d",&e);

	if(a<b)
	{
		if(a<c && a<d && a<e)
		{
			printf("The Minimum No. is:- %d\n ",a);
		}
		else if(c<d && c<e)
		{
			printf("The Minimum No. is:- %d\n ",c);
		}
		else if(d<e)
		{
			printf("The Minimum No. is:- %d\n ",d);
		}
		else
		{
			printf("The Minimum No. is:- %d\n ",e);
		}
	}
	else if(b<c)
	{
		if(b<c && b<d && b<e)
		{
			printf("The Minimum No. is:- %d\n ",b);
		}
		else if(c<d && c<e)
		{
			printf("The Minimum No. is:- %d\n ",c);
		}
		else if(d<e)
		{
			printf("The Minimum No. is:- %d\n ",d);
		}
		else
		{
			printf("The Minimum No. is:- %d\n ",e);
		}
	}
	else if(c<d)
	{
		if(c<e)
		{
			printf("The Minimum No. is:- %d\n ",c);
		}
		else
		{
			printf("The Minimum No. is:- %d\n ",e);
		}
	}
	else if(d<e)
	{
		printf("The Minimum No. is:- %d\n ",d);
	}
	else
	{
		printf("The Minimum No. is:- %d\n ",e);
	}




}
