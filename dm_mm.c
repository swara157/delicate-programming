#include<stdio.h>
int main()
{
    int dm;
    int convert;
    printf("Enter number to convert  decimeter into millimetre  ");
    scanf("%d",&dm);
    convert=dm*100;
    printf("millimetre = %d",convert);
    return 0;
}