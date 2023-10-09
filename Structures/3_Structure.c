//Write a program to store and print the roll no., name, age, address and marks of 15 students using structure.
#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int age;
    char address[100];
    float marks;
}s[15];

void main()
{
    int i;
    for(i=0; i<15; i++)
    {
        printf("Enter the details of student %d \n",i+1);

        printf("Enter roll number: ");
        scanf("%d",&s[i].roll);

        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);

        printf("Enter age: ");
        scanf("%d", & s[i].age );

        printf("Enter address: ");
        fflush(stdin);
        gets(s[i].address);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);  

        printf("\n");
    }

    printf("Database details:\n");
    for(i=0; i<15; i++)
    {
        printf("Student %d",i+1);
        printf("\nRoll number: %d\nName : %s\nAge: %d\nAddress: %s\nMarks: %d",&s[i].roll,s[i].name,&s[i].age,s[i].address,&s[i].marks);
        printf("\n\n");
    }
}