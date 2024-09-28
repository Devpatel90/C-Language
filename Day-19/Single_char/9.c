#include<stdio.h>
#include<ctype.h>
void main() 
{
   char a;


   printf("Enter anything:- ");

    a=getchar();

   printf("%c\n",a);


   if(isalpha(a))
   printf("It is Character");
   else
   printf("It is Not Character");
}