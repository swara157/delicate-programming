#include<stdio.h>
float minutes(float a)
{
    return a*10080;
}
int main()
{
    float x;
    printf("Enter Weeks ");
    scanf("%f",&x);
    printf("Minutes = %.1f",minutes(x));
    return 0;
}