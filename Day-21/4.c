#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

void main() 
{
    char a[50];
    int i,j,k;

    printf("Enter the String: ");
    scanf("%s",a);

    int n = strlen(a);

    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (a[j] == a[i])
            {
                for (k=j;k<n;k++)
                {
                    a[k] = a[k+1];
                }
                n--; 
                j--; 
            }
        }
    }

    printf("The String After Removing is: %s\n",a);

}