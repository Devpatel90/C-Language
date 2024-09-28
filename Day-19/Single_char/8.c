#include<stdio.h>
#include<ctype.h>
void main() 
{
   char a;


   printf("Enter anything:- ");

    a=getchar();

   printf("%c\n",a);


   if(isalnum(a))
   printf("It is AlphaNumeric");
   else
   printf("It is Not AlphaNumeric");
}