#include<stdio.h>
#include<conio.h>
int findlenght(char str[]);
void main()
{

    int length;
    char str[100];

    printf("Enter the your name=");
    gets(str);

    length=findlenght(str);

    printf("Enter the length of string is :- %d",length);

}
int findlenght(char str[])
{
    int len=0;
    while (str[len] != '\0')
    {
        len++;
    }
     return len;
    
}