#include<stdio.h>
float year(float b)
{
    return b/12;
}
int main()
{
    float x,y;
    printf("Enter month to count year ");
    scanf("%f",&x);
    printf("Year = %.2f",year(x));
    return 0;
}