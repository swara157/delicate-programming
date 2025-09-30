#include<stdio.h>
int main()
{
    float micrometer;
    float convert;
    printf("Enter number to convert micrometer into cm ");
    scanf("%f",&micrometer);
    convert=micrometer/10000;
    printf("cm = %.4f",convert);
    return 0;
}