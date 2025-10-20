#include<stdio.h>
float week(float a)
{
    return a/168;
}
int main()
{
    float x;
    printf("Enter Hours ");
    scanf("%f",&x);
    printf("Week = %f",week(x));
    return 0;
}