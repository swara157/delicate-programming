#include<stdio.h>
float sec(float c)
{
    return c*89400;
}
int main()
{
    float x;
    printf("Enter Days ");
    scanf("%f",&x);
    printf("Seconds = %.2f",sec(x));
    return 0;
}