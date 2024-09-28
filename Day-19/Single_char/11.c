#include<stdio.h>
#include<ctype.h>
void main() 
{
   char a;


   printf("Enter anything:- ");

    a=getchar();

   printf("%c\n",a);


   if(islower(a))
   printf("It is in Lowercase");
   else
   printf("It is in Uppercase");
}