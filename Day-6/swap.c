#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter The Value of a= ");
	scanf("%d",&a);
	printf("Enter The Value of b= ");
	scanf("%d",&b);

	printf("The Value Of a= %d\n",a);
	printf("The Value Of b= %d\n",b);

	c=a;
	a=b;
	b=c;

	printf("The Value Of a After Swapping is= %d\n",a);
	printf("The Value Of b After Swapping is= %d\n",b);

}