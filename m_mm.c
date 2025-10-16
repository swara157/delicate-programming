#include<stdio.h>
int main()
{
    int meter;
    int convert;
    printf("Enter number to convert meter into millimetre ");
    scanf("%d",&meter);
    convert=meter*1000;
    printf("millimetre = %d",convert);
    return 0;
}