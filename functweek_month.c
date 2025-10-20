#include<stdio.h>
float month(float a)
{
    return a/4.345;
}
int main()
{
    float x;
    printf("Enter Weeks ");
    scanf("%f",&x);
    printf("Months = %.5f",month(x));
    return 0;
}