//Write a program to add two distances in inch-feet using structure. 
//The values of the distances is to be taken from the user.
#include<stdio.h>
struct distance
{
    int feet, inches;
}d[2];

void main()
{
    int tfeet=0, tinches=0;
    for(int i=0; i<2; i++)
    {
        printf("Enter distance %d\n",i+1);
        printf("in feet: ");
        scanf("%d",&d[i].feet);
        printf("in inch: ");
        scanf("%d", &d[i].inches);

        tfeet += d[i].feet;
        tinches += d[i].inches;
    }

    if(tinches>12)
    {
        tinches = tinches - 12;
        tfeet++;
    }

    printf("Total distance = %d feet and %d inches.",tfeet,tinches);
}