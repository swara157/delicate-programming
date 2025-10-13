#include<stdio.h>
int main()
{
    float foot;
    float convert;
    printf("Enter number to convert foot into millimetre  ");
    scanf("%f",&foot);
    convert=foot*304.8;
    printf("millimetre = %f",convert);
    return 0;
}