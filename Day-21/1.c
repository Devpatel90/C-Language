#include<stdio.h>
#include<string.h>
#include<conio.h> 
#include<ctype.h>

void main()
{
    char a[50];
    int i;
    int fr[50];

    printf("Enter any string: ");
    gets(a);

   int len = strlen(a);

    for(i=0; i<26; i++)
    {
        fr[i] = 0;
    }

    for(i=0; i<len; i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            fr[a[i] - 97]++;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            fr[a[i] - 65]++;
        }
    }

    printf("Frequency :- \n");
    for(i=0;i<26;i++)
    {
        if(fr[i] != 0)
        {
            printf("%c = %d   ", (i + 97), fr[i]);
        }
    }

}