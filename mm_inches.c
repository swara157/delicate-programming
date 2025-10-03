#include<stdio.h>
int main()
{
    int m;
    float convert;
    printf("Enter number to convert  millimeter into inches  ");
    scanf("%d",&m);
    convert=m/25.4;
    printf("inches = %f",convert);
    return 0;
}