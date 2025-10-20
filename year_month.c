#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter year to count month in it ");
    scanf("%f",&x);
    y=x*12;
    printf("Month = %.2f",y);
    return 0;
}