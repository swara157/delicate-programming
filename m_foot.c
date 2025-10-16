#include<stdio.h>
int main()
{
    int meter;
    float convert;
    printf("Enter number to convert meter into foot ");
    scanf("%d",&meter);
    convert=meter*3.281;
    printf("foot = %0.4f",convert);
    return 0;
}