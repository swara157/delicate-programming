#include<stdio.h>
float month(float a)
{
    return a*12;
}
int main()
{
    float x;
    printf("Enter year to count month in it ");
    scanf("%f",&x);
    printf("Month = %.2f",month(x));
    return 0;
}