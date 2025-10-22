#include<stdio.h>
float hours(float a)
{
    return a*730;
}
int main()
{
    float x;
    printf("Enter Month ");
    scanf("%f",&x);
    printf("Hours = %f",hours(x));
    return 0;
}