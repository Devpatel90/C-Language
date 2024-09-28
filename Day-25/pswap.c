#include<stdio.h>
void main()
{
	int a,b;
	int *p,*q,*r;

	p=&a;
	q=&b;


   printf("the value of a=%d\n",*p);
   printf("the value of b=%d\n",*q);

   printf("new values:-\n");

   r=p;
   p=q;
   q=r;

   printf("the new value of a=%d\n",*p);
   printf("the new value of b=%d\n",*q);

}