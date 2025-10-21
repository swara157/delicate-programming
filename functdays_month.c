#include<stdio.h>
float month(float a)
{
    return a/30.417;
}
int main()
{
    float x;
    printf("Enter days to count month ");
    scanf("%f",&x);
    printf("Month = %.2f",month(x));
    return 0;
}