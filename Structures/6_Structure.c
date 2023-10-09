//Write a program to add two time in hour, minute and second using structure. 
//The values of the time is to be taken from the user.
#include<stdio.h>
struct time
{
    int hour, minute, sec;
}time[2];

void main()
{
    int thour=0, tminute=0, tsec=0, tday=0;
    for(int i=0; i<2; i++)
    {
        printf("Enter time %d\n",i+1);
        printf("hours: ");
        scanf("%d",&time[i].hour);
        printf("minutes: ");
        scanf("%d", &time[i].minute);
        printf("seconds: ");
        scanf("%d", &time[i].sec);

        thour += time[i].hour;
        tminute += time[i].minute;
        tsec += time[i].sec;
    }

    if(tsec>60)
    {
        tsec = tsec-60;
        tminute++;
    }

    if(tminute>60)
    {
        tminute = tminute-60;
        thour++;
    }

    if(thour>24)
    {
        thour = thour-24;
        tday++;
    }
    printf("Total time = %d day, %d hours, %d minutes, %d seconds.",tday, thour, tminute, tsec);
}