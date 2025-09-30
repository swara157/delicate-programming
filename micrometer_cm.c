#include<stdio.h>
int main()
{
    float cm;
    float convert;
    printf("Enter number to convert cm into micrometer ");
    scanf("%f",&cm);
    convert=cm*10000;
    printf("Micrometer = %.2f",convert);
    return 0;
}