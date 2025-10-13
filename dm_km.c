#include<stdio.h>
int main()
{
    float dm;
    float convert;
    printf("Enter number to convert  decimeter into kilometer  ");
    scanf("%f",&dm);
    convert=dm/10000;
    printf("kilometer = %f",convert);
    return 0;
}