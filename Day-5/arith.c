#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the Value of a= ");
	scanf("%d",&a);
	printf("Enter the Value of b= ");
	scanf("%d",&b);
	c=a+b;
	printf("The Addition Of Two No. is %d\n",c);
	c=a-b;
	printf("The Subtraction Of Two No. is %d\n",c);
	c=a*b;
	printf("The Multiplication Of Two No. is %d\n",c);
	c=a/b;
	printf("The Division Of Two No. is %d\n",c);
	c=a%b;
	printf("The Modulos Of Two No. is %d\n",c);
}