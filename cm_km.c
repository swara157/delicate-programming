#include<stdio.h>
int main()
{
    float cm;
    float convert;
    printf("Enter number to convert cm into kilometer ");
    scanf("%f",&cm);
    convert=cm/100000;
    printf("Kilometer = %f",convert);
    return 0;
}