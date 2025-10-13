#include<stdio.h>
int main()
{
    float foot;
    float convert;
    printf("Enter number to convert foot into metre ");
    scanf("%f",&foot);
    convert=foot/3.281;
    printf("metre = %f",convert);
    return 0;
}