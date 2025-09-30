#include<stdio.h>
int main()
{
    float cm;
    float convert;
    printf("Enter number to convert cm into meter ");
    scanf("%f",&cm);
    convert=cm/100;
    printf("Meter = %f",convert);
    return 0;
}