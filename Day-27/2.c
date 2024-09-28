#include<stdio.h>
struct emp
{
    int emp;
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};
void main()
{
    struct emp e1;
    
    printf("Enter Your Employee ID:- ");
    scanf("%d",&e1.emp_id);

    printf("Enter Employee Name:- ");
    scanf("%s",&e1.emp_name);

    printf("Enter Employee Age:- ");
    scanf("%d",&e1.emp_age);

    printf("Enter Employee Role:- ");
    scanf("%s",&e1.emp_role);

    printf("Enter Employee City:- ");
    scanf("%s",&e1.emp_city);

    printf("Enter Employee Experience:- ");
    scanf("%d",&e1.emp_experience);

    printf("Enter Company Name of Employee:- "); 
    scanf("%s",&e1.emp_company_name);

// ----------------------------------------------------------------------------------------

        printf("Id:- %d\n",e1.emp_id);

        printf("Name:- %s\n",e1.emp_name);

        printf("Age:- %d\n",e1.emp_age);

        printf("Role:- %s\n",e1.emp_role);

        printf("City:- %s\n",e1.emp_city);
    
        printf("Experience:- %d\n",e1.emp_experience);
    
        printf("Company Name:- %s\n",e1.emp_company_name);
}