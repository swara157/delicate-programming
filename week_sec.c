#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter week to count sec ");
    scanf("%f",&x);
    y=x*604800;
    printf("Second = %.2f",y);
    return 0;
}