#include<stdio.h>
int main()
{
    float kilometer;
    float convert;
    printf("Enter number to convert kilometer into millimetre ");
    scanf("%f",&kilometer);
    convert=kilometer*1000000;
    printf("millimetre = %0.2f",convert);
    return 0;
}