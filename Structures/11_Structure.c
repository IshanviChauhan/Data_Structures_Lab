//Write a program to compare two dates entered by user. 
//Make a structure named Date to store the elements day, month and year to store the dates. 
//If the dates are equal, display "Dates are equal" otherwise display "Dates are not equal".
#include<stdio.h>
struct date
{
    int day, month, year;
}d[2];

void main()
{
    printf("Enter first date (day month year): ");
    scanf("%d %d %d",&d[0].day,&d[0].month,&d[0].year);
    
    printf("Enter second date (day month year): ");
    scanf("%d %d %d",&d[1].day,&d[1].month,&d[1].year);

    if(d[0].day == d[1].day && d[0].month == d[1].month && d[0].year == d[1].year) 
    {
        printf("Dates are equal");
    } 
    else 
    {
        printf("Dates are not equal");
    }
}
