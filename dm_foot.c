#include<stdio.h>
int main()
{
    int dm;
    float convert;
    printf("Enter number to convert  decimeter into foot  ");
    scanf("%d",&dm);
    convert=dm/3.048;
    printf("foot = %f",convert);
    return 0;
}