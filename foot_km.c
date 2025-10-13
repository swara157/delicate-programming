#include<stdio.h>
int main()
{
    float foot;
    float convert;
    printf("Enter number to convert foot into kilometre ");
    scanf("%f",&foot);
    convert=foot/3281;
    printf("kilometre = %f",convert);
    return 0;
}