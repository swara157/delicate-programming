#include<stdio.h>
int main()
{
    float mm;
    float convert;
    printf("Enter number to convert millimeter into decimetre ");
    scanf("%f",&mm);
    convert=mm/100;
    printf("decimeter = %.2f",convert);
    return 0;
}