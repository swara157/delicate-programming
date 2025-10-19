#include<stdio.h>
void main()
{
    int f;
    float k;
    printf("Enter degree fahrenheit ");
    scanf("%d",&f);
    k=5/9*(f-32)+273.15;
    printf("The degree kelvin %.2f",k);
}