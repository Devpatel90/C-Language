#include<stdio.h>
void main()
{
	int a,b,c,d;

	printf("Enter the Value of a:- ");
	scanf("%d",&a);
	printf("Enter the Value of b:- ");
	scanf("%d",&b);
	printf("Enter the Value of c:- ");
	scanf("%d",&c);

	d=a>b && a>c?a:b>c?b:c;
	printf("The Bigger Number is:- %d",d);
}