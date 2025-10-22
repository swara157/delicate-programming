#include<stdio.h>
float years(float a)
{
    return a/8760;
}
int main()
{
    float x;
    printf("Enter Hours ");
    scanf("%f",&x);
    printf("Years = %f",years(x));
    return 0;
}