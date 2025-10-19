#include<stdio.h>
float hours(float h)
{
     return h*60;
}
int main()
{
    float a;
    printf("Enter hours ");
    scanf("%f",&a);
    printf("Minutes = %.2f",hours(a));
    return 0;
}