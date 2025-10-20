#include<stdio.h>
float days(float a)
{
    return a*365.25;
}
int main()
{
    float x;
    printf("Enter year to count days ");
    scanf("%f",&x);
    printf("Days = %.2f",days(x));
    return 0;
}