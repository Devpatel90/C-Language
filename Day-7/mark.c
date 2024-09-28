#include<stdio.h>
void main()
{
	int ma,sc,en,env,guj,san,web;
	float tot,per;

	printf("Enter Marks of Maths:- ");
	scanf("%d",&ma);

	printf("Enter Marks of Science:- ");
	scanf("%d",&sc);

	printf("Enter Marks of English:- ");
	scanf("%d",&en);

	printf("Enter Marks of Environment:- ");
	scanf("%d",&env);

	printf("Enter Marks of Gujarati:- ");
	scanf("%d",&guj);

	printf("Enter Marks of Sanskrit:- ");
	scanf("%d",&san);

	printf("Enter Marks of Web:- ");
	scanf("%d",&web);

	tot=ma+sc+en+env+guj+san+web;

	per=tot/7;

	printf("Percentage:- %.2f\n",per);

	if (per>=40)
	{
		printf("You Are Pass");
	}
	else
	{
		printf("You Are Fail");
	}
}