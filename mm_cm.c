#include<stdio.h>
int main()
{
    float mm;
    float convert;
    printf("Enter number to convert millimeter into centimetre ");
    scanf("%f",&mm);
    convert=mm/10;
    printf("Centimeter = %.2f",convert);
    return 0;

}
