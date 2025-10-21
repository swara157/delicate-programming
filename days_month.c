#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter days to count month ");
    scanf("%f",&x);
    y=x/30.417;
    printf("Month = %.2f",y);
    return 0;
}