#include<stdio.h>
void main()
{
	int a=50;
	int *p,**q;

	p=&a;
	q=&p;

   printf("the address of pointer=%d\n\n",p);
   printf("the value of pointer of pointer =%d\n\n",**q);
   printf("the address of pointer's pointer=%d\n",q);

   
    
}