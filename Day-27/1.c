#include<stdio.h>
struct student
{
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_std;
    char stu_school[50];
};
void main()
{
    struct student s1;
    
    printf("Enter Student Id:- ");
    scanf("%d",&s1.stu_id);

    printf("Enter Student Name:- ");
    scanf("%s",&s1.stu_name);

    printf("Enter Student Age:- ");
    scanf("%d",&s1.stu_age);

    printf("Enter Student Course:- ");
    scanf("%s",&s1.stu_course);

    printf("Enter Student City:- ");
    scanf("%s",&s1.stu_city);

    printf("Enter Student std:- ");
    scanf("%d",&s1.stu_std);

    printf("Enter School Name of Student:- "); 
    scanf("%s",&s1.stu_school);

// ----------------------------------------------------------------------------------------

        printf("Id:- %d\n",s1.stu_id);

        printf("Name:- %s\n",s1.stu_name);

        printf("Age:- %d\n",s1.stu_age);

        printf("Course:- %s\n",s1.stu_course);

        printf("City:- %s\n",s1.stu_city);
    
        printf("Standard:- %d\n",s1.stu_std);
    
        printf("School Name:- %s\n",s1.stu_school);
}