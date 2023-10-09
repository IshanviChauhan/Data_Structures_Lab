//Enter the marks of 5 students in Chemistry, Mathematics and Physics 
//(each out of 100) using a structure named Marks having elements roll no., 
//name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.
#include<stdio.h>
struct marks
{
    int roll;
    char name[20];
    float chem_marks, maths_marks, phy_marks, percent;
}m[5];
void main()
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("Enter the details of student %d \n",i+1);

        printf("Enter roll number: ");
        scanf("%d",&m[i].roll);

        printf("Enter name: ");
        fflush(stdin);
        gets(m[i].name);

        printf("Enter marks out of 100\n");
        printf("Enter Chemistry marks: ");
        scanf("%f", &m[i].chem_marks);  

        printf("Enter Maths marks: ");
        scanf("%f", &m[i].maths_marks);  

        printf("Enter Physics marks: ");
        scanf("%f", &m[i].phy_marks);  

        m[i].percent = (m[i].chem_marks + m[i].maths_marks + m[i].phy_marks)/3;

        printf("\n");
    }

    printf("Database details: \n");
    for(i=0; i<5; i++)
    {
        printf("Student %d",i+1);
        printf("\nRoll number: %d\nName : %s\nPercentage : %.2f",m[i].roll,m[i].name,m[i].percent);
        printf("\n\n");
    }
}