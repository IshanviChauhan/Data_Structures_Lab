//Write a structure to store the roll no., name, age (between 11 to 14) and address of students (more than 10). 
//Store the information of the students.
//Write a function to print the names of all the students having age 14.
//Write another function to print the names of all the students having even roll no.
//Write another function to display the details of the student whose roll no is given (i.e. roll no. entered by the user).
#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int age;
    char address[100];
}s[15];

void age14()
{
    printf("\nStudents having age > 14 is/are: \n");
    for(int i=0; i<15; i++)
    {
        if(s[i].age > 14)
        {
            printf("%s",s[i].name);
        }
    }
}

void evenRoll()
{
    printf("\nStudents having even roll number is/are: \n");
    for(int i=0; i<15; i++)
    {
        if(s[i].roll % 2 == 0)
        {
            printf("%s",s[i].name);
        }
    }
}

void details()
{
    int roll;
    printf("\nEnter roll number: ");
    scanf("%d",&roll);
    printf("Student Details:\n");
    for(int i=0; i<15; i++)
    {
        if(s[i].roll == roll)
        {
            printf("Roll no. : %d\nName : %s\nAge : %d\nAddress : %s",s[i].roll,s[i].name,s[i].age,s[i].address);
        }
    }
}

void main()
{
    for(int i=0; i<15; i++)
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

        printf("\n");
    }
    age14();
    evenRoll();
    details();
}