#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;

	printf("Enter the Value of a:- ");
	scanf("%d",&a);
	printf("Enter the Value of b:- ");
	scanf("%d",&b);
	printf("Enter the Value of c:- ");
	scanf("%d",&c);
	printf("Enter the Value of d:- ");
	scanf("%d",&d);
	printf("Enter the Value of e:- ");
	scanf("%d",&d);

	f=a>b && a>c && a>d && a>e?a:b>c && b>d && b>e?b:c>d && c>e?c:d>e?d:e;
	printf("The Bigger Number is:- %d",f);
}
