#include<stdio.h>
int main()
{
    int meter;
    int convert;
    printf("Enter number to convert meter into decimetre ");
    scanf("%d",&meter);
    convert=meter*10;
    printf("dm = %d",convert);
    return 0;
}