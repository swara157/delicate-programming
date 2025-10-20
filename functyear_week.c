#include<stdio.h>
float week(float a)
{
    return a*52.143;
}
int main()
{
    float x;
    printf("Enter years to count week ");
    scanf("%f",&x);
    printf("Week = %.3f",week(x));
    return 0;
}