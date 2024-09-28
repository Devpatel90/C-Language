#include<stdio.h>
void main()
{
    char abc;

    printf("Enter the any character : ");
    scanf("%c",&abc);

    if((abc>='A' && abc<='Z') || (abc>='a'  && abc<='z'))
    {   
        printf("%c is a Alphabet ",abc);
    }
    else if(abc>='0' && abc<='9')
    {
        printf("%c is a Digit ",abc); 
    }
    else
    {
        printf("%c is a Special Character ",abc);
    }

}