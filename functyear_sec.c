#include<stdio.h>
float sec(float a)
{
    return a*3.154;
}
int main()
{
    float x;
    printf("Enter year to count seconds in it ");
    scanf("%f",&x);
    printf("Seconds = %.4fe+7",sec(x));
    return 0;
}