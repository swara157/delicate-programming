#include<stdio.h>
int main()
{
    float r,d;
    printf("Enter rupees to know in dollars ");
    scanf("%f",&r);
    d=r/88.22;
    printf("Dollars = %.3f",d);
    return 0;
}