#include<stdio.h>
float week(float a)
{
    return a*4.345;
}
int main()
{
    float x,y;
    printf("Enter Months ");
    scanf("%f",&x);
    printf("Weeks = %.1f",week(x));
    return 0;
}