#include<stdio.h>
int main()
{
    float cm;
    float convert;
    printf("Enter number to convert cm into decimeter ");
    scanf("%f",&cm);
    convert=cm/10;
    printf("Decimeter = %f",convert);
    return 0;
}