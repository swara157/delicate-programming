#include<stdio.h>
float sec(float a)
{
    return a/3.154;
}
int main()
{
    float x;
    printf("Enter seconds in number ");
    scanf("%f",&x);
    printf("Year = %.4fe-8",sec(x));
    return 0;
}