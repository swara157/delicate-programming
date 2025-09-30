#include<stdio.h>
int main()
{
    float cm;
    float convert;
    printf("Enter number to convert cm into millimeter ");
    scanf("%f",&cm);
    convert=cm*10;
    printf("Millimeter = %.2f",convert);
    return 0;
}