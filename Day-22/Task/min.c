#include<stdio.h>
void min(int h,int i,int j,int k,int l);
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

    min(a,b,c,d,e);
}
void min(int h,int i,int j,int k,int l)
{
    if(h<i)
	{
		if(h<j && h<k && h<l)
		{
			printf("The Minimum No. is:- %d\n ",h);
		}
		else if(j<k && j<l)
		{
			printf("The Minimum No. is:- %d\n ",j);
		}
		else if(k<l)
		{
			printf("The Minimum No. is:- %d\n ",k);
		}
		else
		{
			printf("The Minimum No. is:- %d\n ",l);
		}
	}
	else if(i<j)
	{
		if(i<j && i<k && i<l)
		{
			printf("The Minimum No. is:- %d\n ",i);
		}
		else if(j<k && j<l)
		{
			printf("The Minimum No. is:- %d\n ",j);
		}
		else if(k<l)
		{
			printf("The Minimum No. is:- %d\n ",k);
		}
		else
		{
			printf("The Minimum No. is:- %d\n ",l);
		}
	}
	else if(j<k)
	{
		if(j<l)
		{
			printf("The Minimum No. is:- %d\n ",j);
		}
		else
		{
			printf("The Minimum No. is:- %d\n ",l);
		}
	}
	else if(k<l)
	{
		printf("The Minimum No. is:- %d\n ",k);
	}
	else
	{
		printf("The Minimum No. is:- %d\n ",l);
	}
    
}