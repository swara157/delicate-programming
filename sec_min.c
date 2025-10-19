#include<stdio.h>
int main()
{
    float s,m;
    printf("Enter seconds ");
    scanf("%f",&s);
    m=s/60;
    printf("Minutes = %.2f",m);
    return 0;
}