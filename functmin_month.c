#include<stdio.h>
float month(float a)
{
    return a/43800;
}
int main()
{
    float x;
    printf("Enter minutes ");
    scanf("%f",&x);
    printf("Month = %f",month(x));
    return 0;
}