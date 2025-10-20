#include<stdio.h>
float year(float a)
{
    return a/52.143;
}
int main()
{
    float x;
    printf("Enter weeks to count year ");
    scanf("%f",&x);
    printf("Year = %.2f",year(x));
    return 0;
}