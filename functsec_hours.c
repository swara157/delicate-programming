#include<stdio.h>
float hours(float s,float h)
{
     h=s/3600;
     return h;
}
int main()
{
    float a,b;
    printf("Enter seconds ");
    scanf("%f",&a);
    printf("Hours = %.2f",hours(a,b));
    return 0;
}