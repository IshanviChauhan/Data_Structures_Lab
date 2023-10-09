//Write a program to add, subtract and multiply two complex numbers using structures to function.
#include<stdio.h>
struct complex
{
    float real, img;
}c[2];

void main()
{
    float realSum=0, imgSum=0, realSub=0, imgSub=0, realPro=0, imgPro=0;
    for(int i=0; i<2; i++)
    {
        printf("Enter complex number %d\n",i+1);
        printf("Real part: ");
        scanf("%f",&c[i].real);
        printf("Imaginary part: ");
        scanf("%f", &c[i].img);
    }

    realSum = c[0].real + c[1].real;
    imgSum = c[0].img + c[1].img;

    realSub = c[0].real - c[1].real;
    imgSub = c[0].img - c[1].img;

    realPro = c[0].real*c[1].real - c[0].img*c[1].img;
    imgPro = c[0].img*c[1].real + c[0].real*c[1].img;

    printf("Sum = %.2f + i %.2f",realSum,imgSum);
    printf("\nDifference = %.2f + (i %.2f)",realSub,imgSub);
    printf("\nProduct = %.2f + (i %.2f)",realPro,imgPro);
}