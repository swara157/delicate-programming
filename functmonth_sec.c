#include<stdio.h>
float sec(float a)
{
    return a*2.628;
}
int main()
{
    float x;
    printf("Enter months in number ");
    scanf("%f",&x);
    printf("Seconds = %fe+6",sec(x));
    return 0;
}