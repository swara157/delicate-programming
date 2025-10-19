#include<stdio.h>
void main()
{
    float f,k;
    printf("Enter degree kelvin ");
    scanf("%f",&k);
    f=9/5*(k-273.15)+32;
    printf("The degree fahrenheit %.2f",f);
}