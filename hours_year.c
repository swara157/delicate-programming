#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter Hours ");
    scanf("%f",&x);
    y=x/8760;
    printf("Years = %f",y);
    return 0;
}