#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter month to count days ");
    scanf("%f",&x);
    y=x*30.417;
    printf("Days = %.3f",y);
    return 0;
}