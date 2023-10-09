#include<stdio.h>
struct student
{
    int r;
    char name[20];
    float m;
}s[60];
void main()
{
    int i;
    for(i=0; i<60; i++)
    {
        printf("Enter the details of %d student: ",i+1);
        scanf("%d %f",&s[i].r, &s[i].m);
        fflush(stdin);
        gets(s[i].name);
    }
}