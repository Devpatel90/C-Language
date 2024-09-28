#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() 
{
    FILE *file;
    file = fopen("data.txt", "w");

    int n;
    printf("Enter the number of employees:-\n");
    scanf("%d", &n);

    char name[100], role[100];
    for (int i = 0; i < n; i++) 
    {
        printf("Enter employee %d's name:\n", i+1);
        scanf("%s", name);

        printf("Enter employee %d's role:\n", i+1);
        scanf("%s", role);

        fprintf(file, "Employee name : %s\t\tEmployee role : %s\n", name, role);
    }

    fclose(file);

    printf("Employee names written to data.txt\n");
}