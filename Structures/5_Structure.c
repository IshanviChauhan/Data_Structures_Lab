//Write a program to add two complex numbers using structure. 
//The values of the complex number is to be taken from the user.
#include<stdio.h>
struct complex
{
    float real, img;
}c[2];

void main()
{
    float treal=0, timg=0;
    for(int i=0; i<2; i++)
    {
        printf("Enter complex number %d\n",i+1);
        printf("Real part: ");
        scanf("%f",&c[i].real);
        printf("Imaginary part: ");
        scanf("%f", &c[i].img);

        treal += c[i].real;
        timg += c[i].img;
    }

    printf("Sum = %.2f + i %.2f.",treal,timg);
}