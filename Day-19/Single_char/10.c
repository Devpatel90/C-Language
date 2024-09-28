#include<stdio.h>
#include<ctype.h>
void main() 
{
   char a;


   printf("Enter anything:- ");

    a=getchar();

   printf("%c\n",a);


   if(isdigit(a))
   printf("It is Digit");
   else
   printf("It is Not Digit");
}