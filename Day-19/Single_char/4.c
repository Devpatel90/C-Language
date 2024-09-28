#include<stdio.h>
#include<ctype.h>
void main()
{
	char a,b;
    char us,ls;

    printf("Enter the Value That You Want to Print in Uppercase and in Lowercase :-");
	scanf("%c %c",&a,&b);

	us = toupper(a);

	ls = tolower(b);
	
	printf("Uppercase Letter:- %c\n",us);
	printf("Lowercase Letter:- %c",ls);

}