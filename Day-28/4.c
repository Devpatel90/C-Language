#include <stdio.h>
void main()
{
	FILE *p,*p1;
	char name[1000]="Dev";
	char c;

	p=fopen("hello.txt","r");

	if(p!=NULL)
	{
		printf("File has been Founded...\n");
	}
	else{
		printf("File has been Not Founded...\n");
	}

	p1=fopen("dev.txt","w");

	if(p!=NULL)
	{
		printf("File 2 has been Founded...\n");
	}
	else{
		printf("File 2 has been Not Founded...\n");
	}

	while( (c=fgetc(p)) != EOF )
	{
		fputc(c,p1);
	}
	printf("Contents copied to %s\n",name);

	fclose(p);
	fclose(p1);
}