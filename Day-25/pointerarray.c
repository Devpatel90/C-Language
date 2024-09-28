#include<stdio.h>
void main()
{
	
	int a[5]={5,10,15,20,25};
	int *p;
	
    p=&a;
	
   printf("the First value of array=%d\n",a[0]);
   printf("the Second value of array=%d\n",a[1]);
   printf("the Third value of array=%d\n",a[2]);
   printf("the Fourth value of array=%d\n",a[3]);
   printf("the Fifth value of array=%d\n\n",a[4]);

   printf("the address of all value using pointer is:-\n\n");

   printf("the address of first value of array=%d\n",p);
   printf("the address of second value of array=%d\n",p+1);
   printf("the address of third value of array=%d\n",p+2);
   printf("the address of fourth value of array=%d\n",p+3);
   printf("the address of fifth value of array=%d\n",p+4);
   
}