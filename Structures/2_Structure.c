//Write a program to store and print the roll no., name, age and marks of a student using structures. 
//Write a program to store the roll no. (starting from 1), name and age of 5 students
//and then print the details of the student with roll no. 1.
#include<stdio.h>
struct Student
{
    int roll;
    char name[20];
    int age;
    float marks;
}s[5];

void main()
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("Roll number %d\n",i+1);

        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);

        printf("Enter age: ");
        scanf("%d",&s[i].age);

        printf("Enter marks out of 100: ");
        scanf("%f", &s[i].marks);  

        printf("\n");
    }

    printf("Database details: \n");
    for(i=0; i<5; i++)
    {
        printf("Student %d",i+1);
        printf("\nRoll number: %d\nName : %s\nMarks : %.2f",s[i].roll,s[i].name,s[i].marks);
        printf("\n\n");
    }
}
