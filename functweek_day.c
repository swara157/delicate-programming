#include<stdio.h>
float day(float a)
{
    return a*7;
}
int main()
{
    float x;
    printf("Enter Weeks  ");
    scanf("%f",&x);
    printf("Days = %.2f",day(x));
    return 0;
}