#include<stdio.h>
float days(float a)
{
    return a*30.417;
}
int main()
{
    float x;
    printf("Enter month to count days ");
    scanf("%f",&x);
    printf("Days = %.3f",days(x));
    return 0;
}