#include<stdio.h>
float minutes(float a)
{
    return a*525600;
}
int main()
{
    float x;
    printf("Enter Year ");
    scanf("%f",&x);
    printf("Minutes = %f",minutes(x));
    return 0;
}