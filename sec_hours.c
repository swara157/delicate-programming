#include<stdio.h>
int main()
{
    float s,h;
    printf("Enter seconds ");
    scanf("%f",&s);
    h=s/3600;
    printf("Hours = %.2f",h);
    return 0;
}