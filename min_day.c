#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter Minutes ");
    scanf("%f",&x);
    y=x/1440;
    printf("Days = %.2f",y);
    return 0;
}