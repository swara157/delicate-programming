#include<stdio.h>
int main()
{
    float mm;
    float convert;
    printf("Enter number to convert millimeter into foot ");
    scanf("%f",&mm);
    convert=mm/304.8;
    printf("foot = %f",convert);
    return 0;
}