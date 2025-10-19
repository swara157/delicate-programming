#include<stdio.h>
int main()
{
    float r,d;
    printf("Enter dollars to know in rupees ");
    scanf("%f",&d);
    r=d*88.22;
    printf("Rupees = %.3f",r);
    return 0;
}