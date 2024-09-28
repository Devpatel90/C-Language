#include <stdio.h>
int swap(int x,int y);
void main()
{
	int a,b,c;
	printf("Enter the value of A = ");
	scanf("%d",&a);
	printf("Enter the value of B = ");
	scanf("%d",&b);

	swap(a,b);

	printf("the new value of a=%d\n",swap(a,b));
	printf("the new value of b=%d\n",swap(b,a));

}

int swap(int x , int y)
{
	int z;
	z=x;
	x=y;
	y=z;

	return x;
	return y;
}