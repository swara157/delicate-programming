#include<stdio.h>
float year(float a)
{
    return a/365.25;
}
int main()
{
    float x;
    printf("Enter days to count year ");
    scanf("%f",&x);
    printf("Year = %.2f",year(x));
    return 0;
}