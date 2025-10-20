#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter days to count year ");
    scanf("%f",&x);
    y=x/365.25;
    printf("Year = %.2f",y);
    return 0;
}