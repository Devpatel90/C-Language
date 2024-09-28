#include<stdio.h>
void main()
{
	int a,b,c,d,e;

	printf("Enter the Value of a:- ");
	scanf("%d",&a);
	printf("Enter the Value of b:- ");
	scanf("%d",&b);
	printf("Enter the Value of c:- ");
	scanf("%d",&c);
	printf("Enter the Value of d:- ");
	scanf("%d",&d);

	e=a>b && a>c && a>d?a:b>c && b>d?b:c>d?c:d;
	printf("The Bigger Number is:- %d",e);
}