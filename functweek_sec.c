#include<stdio.h>
float sec(float a)
{
    return a*604800;
}
int main()
{
    float x,y;
    printf("Enter week to count sec ");
    scanf("%f",&x);
    printf("Second = %.2f",sec(x));
    return 0;
}