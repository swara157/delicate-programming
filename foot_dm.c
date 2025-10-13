#include<stdio.h>
int main()
{
    float foot;
    float convert;
    printf("Enter number to convert foot into decimetre ");
    scanf("%f",&foot);
    convert=foot*3.048;
    printf("decimetre = %f",convert);
    return 0;
}