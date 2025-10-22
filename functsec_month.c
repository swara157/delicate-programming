#include<stdio.h>
float month(float a)
{
    return a/2.628;
}
int main()
{
    float x;
    printf("Enter seconds ");
    scanf("%f",&x);
    printf("Months = %.2fe-7",month(x));
    return 0;
}