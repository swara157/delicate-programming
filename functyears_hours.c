#include<stdio.h>
float hours(float a)
{
    return a*8760;
}
int main()
{
    float x;
    printf("Enter years ");
    scanf("%f",&x);
    printf("Hours = %.2f",hours(x));
    return 0;
}