#include<stdio.h>
float hours(float d)
{
    return d*24;
}
int main()
{
    float x;
    printf("Enter Days ");
    scanf("%f",&x);
    printf("Hours = %.2f",hours(x));
    return 0;
}