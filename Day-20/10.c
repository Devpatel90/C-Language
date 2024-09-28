#include<stdio.h>
#include<string.h>
int main()
{
   char a[50];
   printf("Enter your Name:- ");
   gets(a);
   puts(a);

   char b = '*';
   

   printf("Value of a:- %s \n", a);

   printf("After strset() :- %s",strset(a,b));

}