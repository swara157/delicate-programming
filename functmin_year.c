#include<stdio.h>
float year(float a)
{
    return a/525600;
}
int main()
{
    float x;
    printf("Enter Minutes ");
    scanf("%f",&x);
    printf("Year = %f",year(x));
    return 0;
}