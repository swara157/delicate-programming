#include<stdio.h>
float seconds(float m)
{
     return m*60;
}
int main()
{
    float a;
    printf("Enter Minutes ");
    scanf("%f",&a);
    printf("Seconds = %.2f",seconds(a));
    return 0;
}