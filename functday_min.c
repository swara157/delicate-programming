#include<stdio.h>
float minutes(float a)
{
    return a*1440;
}
int main()
{
    float x;
    printf("Enter Days ");
    scanf("%f",&x);
    printf("Minutes = %.2f",minutes(x));
    return 0;
}