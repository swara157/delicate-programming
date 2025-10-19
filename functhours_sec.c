#include<stdio.h>
float seconds(float h)
{
     return h*3600;
}
int main()
{
    float a;
    printf("Enter Hours ");
    scanf("%f",&a);
    printf("Seconds = %.2f",seconds(a));
    return 0;
}