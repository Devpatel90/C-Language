#include<stdio.h>
void main()
{
	int b_s,hra,da,ta,g_s;

	printf("Enter Your Base Salary:- ");
	scanf("%d",&b_s);

	hra=b_s*10/100;

	printf("HRA= %d\n",hra);

	da=b_s*5/100;

	printf("DA= %d\n",da);

	ta=b_s*8/100;

	printf("TA= %d\n",ta);

	g_s=b_s+hra+da+ta;

	printf("The Gross Salary is:- %d",g_s);

}