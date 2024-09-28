#include<stdio.h>
#include<ctype.h>
void main() 
{
   char a;


   printf("Enter anything:- ");

    a=getchar();

   printf("%c\n",a);


   if(ispunct(a))
   printf("It is Special Symbol");
   else
   printf("It is Not Special Symbol");
}