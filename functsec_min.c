#include<stdio.h>
float minutes(float s,float m)
{
     m=s/60;
     return m;
}
int main()
{
    float a,b;
    printf("Enter seconds ");
    scanf("%f",&a);
    printf("Minutes = %.2f",minutes(a,b));
    return 0;
}