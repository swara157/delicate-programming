#include<stdio.h>
float days(float a)
{
    return a/1440;
}
int main()
{
    float x;
    printf("Enter Minutes ");
    scanf("%f",&x);
    printf("Days = %.2f",days(x));
    return 0;
}