#include<stdio.h>
void main()
{
	int i=1,num;
	printf("Enter the Number= ");
	scanf("%d",&num);
    
    do
	{
		printf("%d X %d = %d\n",num,i,num*i);
		i++;
	}
    while(i<=10);
}