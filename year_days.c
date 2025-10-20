#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter year to count days ");
    scanf("%f",&x);
    y=x*365.25;
    printf("Days = %.2f",y);
    return 0;
}