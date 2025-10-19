#include<stdio.h>
float days(float d)
{
    return d/86400;
}
int main()
{
    float x;
    printf("Enter Seconds ");
    scanf("%f",&x);
    printf("Days = %.4f",days(x));
    return 0;
}