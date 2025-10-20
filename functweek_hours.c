#include<stdio.h>
float hour(float a)
{
    return a*168;
}
int main()
{
    float x;
    printf("Enter week ");
    scanf("%f",&x);
    printf("Hours = %.2f",hour(x));
    return 0;
}