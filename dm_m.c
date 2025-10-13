#include<stdio.h>
int main()
{
    float dm;
    float convert;
    printf("Enter number to convert  decimeter into meter  ");
    scanf("%f",&dm);
    convert=dm/10;
    printf("meter = %f",convert);
    return 0;
}