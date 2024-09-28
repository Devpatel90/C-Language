#include<stdio.h>
int add(int a);
void main()
{
		int n;
		printf("Enter the Number :- ");
		scanf("%d",&n);
        
		printf("Factorial %d of %d ...",n,add(n));	
}
int add(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return a*add(a-1);
	}
}