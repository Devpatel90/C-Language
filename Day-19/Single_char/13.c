#include<stdio.h>
#include<ctype.h>
void main() 
{
   char a;


   printf("Enter anything:- ");

    a=getchar();

   printf("%c\n",a);


   if(isspace(a))
   printf("There is Space");
   else
   printf("There is Not Space");
}