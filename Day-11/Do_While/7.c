#include<stdio.h>
void main()
{
	int a=2000;

	do
	{
		if(a%4==0)
		{
			printf("%d\n",a);
		}
		a++;
	}
    while(a<=3000);
}