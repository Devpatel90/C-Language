#include <stdio.h>
#include<conio.h>
#include <string.h>
#include<ctype.h> 

void main()
{
  	char a[50];
  	int i,j;
 
  	printf("Enter any String : \n");
  	gets(a);

    int n=strlen(a);

  	for(i=0;i<n;i++)
  	{
  		for(j=i+1;j<n;j++)
  		{
  			if(a[i] == a[j])  
			{
  				a[j] = a[j+1];
 			}
		}
	}
	
	printf("The Final String is = %s \n", a);

}