#include<stdio.h>
int main()
{
    int dm;
    float convert;
    printf("Enter number to convert  decimeter into inches  ");
    scanf("%d",&dm);
    convert=dm*3.937;
    printf("inches = %f",convert);
    return 0;
}