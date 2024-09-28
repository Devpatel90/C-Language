#include<stdio.h>
void main()
{
	int a=100,b=200,c=300;
	int *p,*q,*r;

	p=&a;
	q=&b;
	r=&c;

   printf("the address of a=%d\n",p);
   printf("the address of b=%d\n",q);
   printf("the address of c=%d",r);
    
}