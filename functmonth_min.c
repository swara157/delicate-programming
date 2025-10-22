#include<stdio.h>
float minutes(float a)
{
    return a*43800;
}
int main()
{
    float x;
    printf("Enter Month ");
    scanf("%f",&x);
    printf("Minutes = %.1f",minutes(x));
    return 0;
}