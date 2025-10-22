#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter Year ");
    scanf("%f",&x);
    y=x*8760;
    printf("Hours = %.2f",y);
    return 0;
}