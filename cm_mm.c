#include<stdio.h>
int main()
{
    float cm;
    float convert;
    printf("Enter number to convert centimetre into millimeter  ");
    scanf("%f",&cm);
    convert=cm*10;
    printf("millimetre = %.2f",convert);
    return 0;

}
