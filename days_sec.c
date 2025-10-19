#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter Days ");
    scanf("%f",&x);
    y=x*86400;
    printf("Seconds = %.2f",y);
    return 0;
}