#include<stdio.h>
float month(float a)
{
    return a/730;
}
int main()
{
    float x;
    printf("Enter Hours ");
    scanf("%f",&x);
    printf("Month = %f",month(x));
    return 0;
}