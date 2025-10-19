#include<stdio.h>
float days(float h)
{
    return h/24;
}
int main()
{
    float x;
    printf("Enter Hours ");
    scanf("%f",&x);
    printf("Days = %.2f",days(x));
    return 0;
}