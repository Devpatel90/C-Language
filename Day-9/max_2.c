#include<stdio.h>
void main()
{
	int a,b,c;

	printf("Enter the Value of a:- ");
	scanf("%d",&a);
	printf("Enter the Value of b:- ");
	scanf("%d",&b);

	c=a>b?a:b;
	printf("The Bigger Number is:- %d",c);
}