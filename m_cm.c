#include<stdio.h>
int main()
{
    int meter;
    int convert;
    printf("Enter number to convert meter into cm ");
    scanf("%d",&meter);
    convert=meter*100;
    printf("cm = %d",convert);
    return 0;
}