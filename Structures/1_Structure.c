//Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. 
//Find if the student is eligible for admission in Delhi University.
//A student is eligible for DU if he has scored 95% or more in Best 4.
#include<stdio.h>
struct student
{
    char name[20];
    int roll;
    int marks[6];
}s;
void main()
{
    int temp, sum=0;
    float percent;
    printf("Enter the name: ");
    scanf("%s", s.name);
    printf("Enter the roll number: ");
    scanf("%d",&s.roll);
    printf("Enter marks of 6 subject:\n");
    for(int i=0; i<6; i++)
    {
        scanf("%d",&s.marks[i]);
    }

    //Sorting marks in descending order
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            if(s.marks[i]>s.marks[j])
            {
                temp = s.marks[j];
                s.marks[j] = s.marks[i];
                s.marks[i] = temp;
            }
        }
    }

    for(int i=0; i<4; i++){
        sum = sum + s.marks[i];
    }
    percent = sum/6.0;

    printf("Percentage = %.2f",percent);

    if(percent>95.0)
    {
        printf("\nEligible for DU");
    }
    else
    {
        printf("\nNot eligible");
    }
}