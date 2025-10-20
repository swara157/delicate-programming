#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter month to count year ");
    scanf("%f",&x);
    y=x/12;
    printf("Year = %.2f",y);
    return 0;
}