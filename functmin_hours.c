#include<stdio.h>
float hours(float s)
{
     return s/60;
}
int main()
{
    float a;
    printf("Enter minutes ");
    scanf("%f",&a);
    printf("Hours = %.2f",hours(a));
    return 0;
}