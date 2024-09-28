#include<stdio.h>
void main()
{
	int a;
	
	printf("Enter the value of a:- ");
	scanf("%d",&a);

	int *p;

	p=&a;

	p=a*a;

	printf("The Squre of a=%d\n",p);

}