#include <stdio.h>
void main()
{
    FILE *p;
    char msg[100]="hello";
    char text[100];

    p=fopen("ex.txt","a");


    if (p!=NULL)
    {
        printf("File has been Founded...\n");
    }
    else{
        printf("file has been not Founded...\n");
    }

    while(msg!=NULL)
    {
        fputs(msg,p);
        break;
    }

    printf("Enter text to append: ");
    scanf("%s",&text);

    fputs(text, p);

    fclose(p);

    printf("Text appended successfully!\n");

}