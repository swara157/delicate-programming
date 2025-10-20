#include<stdio.h>
float week(float a)
{
    return a/10080;
}
int main()
{
    float x;
    printf("Enter Minutes ");
    scanf("%f",&x);
    printf("Weeks = %f",week(x));
    return 0;
}