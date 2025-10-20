#include<stdio.h>
float week(float a)
{
    return a/7;
}
int main()
{
    float x;
    printf("Enter Days ");
    scanf("%f",&x);
    printf("Weeks = %.2f",week(x));
    return 0;
}