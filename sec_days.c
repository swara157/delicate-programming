#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter Seconds ");
    scanf("%f",&x);
    y=x/86400;
    printf("Days = %.4f",y);
    return 0;
}